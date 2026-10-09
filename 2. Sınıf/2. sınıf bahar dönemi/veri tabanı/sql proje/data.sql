USE lojistik_db;

INSERT INTO KURYELER (kurye_ad, kurye_soyad, kurye_tel, ehliyet_tipi)
VALUES
('Ahmet', 'Yilmaz', '05551234567', 'B'),
('Mehmet', 'Kaya', '05559876543', 'A2'),
('Ayse', 'Demir', '05552345678', 'B');

INSERT INTO ARACLAR (plaka_num, arac_tipi, kurye_ID)
VALUES
('25ABC111', 'Motosiklet', 1),
('06UUA222', 'Araba', 2),
('41BTG456', 'Scooter', 3);

INSERT INTO TESLIMAT_DURUMLARI (durum_adi)
VALUES
('Hazirlaniyor'),
('Yolda'),
('Teslim Edildi');

INSERT INTO TESLIMAT_TAKIP 
(teslimat_tarihi, kurye_ID, arac_ID, durum_ID)
VALUES
('2025-05-20 10:30:00', 1, 1, 2),
('2025-05-20 12:15:00', 2, 2, 3),
('2025-05-21 09:00:00', 3, 3, 1);