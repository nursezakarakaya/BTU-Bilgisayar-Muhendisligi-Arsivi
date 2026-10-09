CREATE DATABASE lojistik_db;
USE lojistik_db;

CREATE TABLE KURYELER (
    kurye_ID INT PRIMARY KEY AUTO_INCREMENT,
    kurye_ad VARCHAR(45),
    kurye_soyad VARCHAR(45),
    kurye_tel VARCHAR(20),
    ehliyet_tipi VARCHAR(10)
);

CREATE TABLE ARACLAR (
    arac_ID INT PRIMARY KEY AUTO_INCREMENT,
    plaka_num VARCHAR(45),
    arac_tipi VARCHAR(45),
    kurye_ID INT UNIQUE, -- KURYELER'le birebir ilişki olduğundan unique olur, eğer unique demezsek bir kurye birden çok araç kullanıyormuş gibi olur.
    
    FOREIGN KEY (kurye_ID)
    REFERENCES KURYELER(kurye_ID)
);

CREATE TABLE TESLIMAT_DURUMLARI (
    durum_ID INT PRIMARY KEY AUTO_INCREMENT,
    durum_adi VARCHAR(45)
);

CREATE TABLE TESLIMAT_TAKIP (
    -- siparis_id sütununu kaldırdım direk farklı bir tablonun foreign key'i olduğundan
    takip_ID INT PRIMARY KEY AUTO_INCREMENT,
    teslimat_tarihi DATETIME,
    kurye_ID INT,
    arac_ID INT,
    durum_ID INT,

    FOREIGN KEY (kurye_ID)
    REFERENCES KURYELER(kurye_ID),

    FOREIGN KEY (arac_ID)
    REFERENCES ARACLAR(arac_ID),

    FOREIGN KEY (durum_ID)
    REFERENCES TESLIMAT_DURUMLARI(durum_ID)
);