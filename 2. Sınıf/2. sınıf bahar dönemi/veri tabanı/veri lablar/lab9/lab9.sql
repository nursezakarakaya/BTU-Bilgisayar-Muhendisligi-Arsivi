-- Ürünler tablosu
CREATE TABLE products (
    id INT UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    stock_quantity INT NOT NULL,
    price DECIMAL(10, 2) NOT NULL
);

-- Siparişler tablosu
CREATE TABLE orders (
    id INT UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    product_id INT UNSIGNED NOT NULL,
    quantity INT NOT NULL,
    order_date DATETIME DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (product_id) REFERENCES products(id) ON DELETE CASCADE
);

-- Fiyat geçmişi takip tablosu
CREATE TABLE price_history (
    id INT UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    product_id INT UNSIGNED NOT NULL,
    old_price DECIMAL(10, 2),
    new_price DECIMAL(10, 2),
    change_date DATETIME DEFAULT CURRENT_TIMESTAMP,
    FOREIGN KEY (product_id) REFERENCES products(id) ON DELETE CASCADE
);

-- Sistem log (günlük) tablosu
CREATE TABLE audit_log (
    id INT UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    action_type VARCHAR(50),
    log_message TEXT,
    action_date DATETIME DEFAULT CURRENT_TIMESTAMP
);

-- Başlangıç verilerini ekleyelim
INSERT INTO products (name, stock_quantity, price) VALUES
('laptop', 50, 15000.00),
('mouse', 150, 250.00),
('keyboard', 80, 450.00);

-- 2
DELIMITER //

CREATE TRIGGER before_product_insert
BEFORE INSERT ON products
FOR EACH ROW
BEGIN
    -- 1. Ürün isminin ilk harfini büyütme ve kalanını küçük yapma kodu:
    SET NEW.name = CONCAT(UPPER(SUBSTRING(NEW.name, 1, 1)), LOWER(SUBSTRING(NEW.name, 2)));
    
    -- 2. Fiyat kontrolü kodu:
    IF NEW.price < 0 THEN
        SET NEW.price = 0.00;
    END IF;
    
END //

DELIMITER ;

-- 3
DELIMITER //

CREATE TRIGGER after_order_insert
AFTER INSERT ON orders
FOR EACH ROW
BEGIN
    DECLARE current_stock INT;
    
    SELECT stock_quantity INTO current_stock
    FROM products
    WHERE id = NEW.product_id;
    
    IF current_stock < NEW.quantity THEN
        -- Hata fırlatma komutunu yazınız:
        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = 'Hata: Yetersiz stok! Sipariş tamamlanamadı.';
    ELSE
        UPDATE products
        SET stock_quantity = current_stock - NEW.quantity
        WHERE id = NEW.product_id;
    END IF;
END //

DELIMITER ;

-- 3
DELIMITER //

CREATE TRIGGER after_product_update
AFTER UPDATE ON products
FOR EACH ROW
BEGIN
    IF OLD.price <> NEW.price THEN
        INSERT INTO price_history (product_id, old_price, new_price)
        VALUES ( NEW.id, OLD.price, NEW.price );
    END IF;
END //

DELIMITER ;

-- 4

DELIMITER //

CREATE TRIGGER after_product_delete
AFTER DELETE ON products
FOR EACH ROW
BEGIN
    INSERT INTO audit_log (action_type, log_message)
    VALUES ('DELETE', CONCAT('Silinen Ürün ID: ', OLD.id, ', İsim: ', OLD.name));
END //

DELIMITER ;

-- 5

DELIMITER //

CREATE TRIGGER before_order_insert_validation
BEFORE INSERT ON orders
FOR EACH ROW
BEGIN
    IF NEW.quantity <= 0 THEN
        SIGNAL SQLSTATE '45000'
        SET MESSAGE_TEXT = 'Hata: Sipariş miktarı 0 veya daha küçük olamaz!';
    END IF;
END //

DELIMITER ;
-- hatalı sorgu
INSERT INTO orders (product_id, quantity) VALUES (1, -5);

- 6

SHOW TRIGGERS;

-- 7
DROP TRIGGER before_product_insert;