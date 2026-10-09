USE lojistik_db;

-- Sorgu 1: Burada hangi kuryenin hangi aracı kullandığını listeledim.
-- böylece hangi kuryenin hangi aracı anlık olarak kullandığını görebilirim.
-- (örn: Mehmet Kaya 06UUA222 plakalı arabayı kullanıyormuş) gibi
SELECT
    KURYELER.kurye_ad,
    KURYELER.kurye_soyad,
    ARACLAR.plaka_num,
    ARACLAR.arac_tipi
FROM KURYELER
INNER JOIN ARACLAR ON KURYELER.kurye_ID = ARACLAR.kurye_ID; -- KURYELER ve ARACLAR tablolarını kurye_ID sütunu üzerinden birleştirdim.
-- inner join dedim çünkü sadece o an araç kullanan kuryeleri görmek istiyorum


-- Sorgu 2: Burada teslimat takip bilgilerini teslimat durumları ile birlikte gösterttim.
-- böylece müşterilerin siparişlerinin durumunu görebiliriz.
SELECT
    TESLIMAT_TAKIP.takip_ID,
    TESLIMAT_TAKIP.teslimat_tarihi,
    TESLIMAT_DURUMLARI.durum_adi
FROM TESLIMAT_TAKIP
INNER JOIN TESLIMAT_DURUMLARI ON TESLIMAT_TAKIP.durum_ID = TESLIMAT_DURUMLARI.durum_ID; -- TESLIMAT_TAKIP ve TESLIMAT_DURUMLARI tablolarını durum_ID sütunu üzerinden birleştirdim.
-- normalde durum_id = 2'den mesela hiçbir şey anlamayız. Ama şimdi tabloları birleştirdik ve bu sayede siparişin durumunu 'Hazırlanıyor' gibi görebileceğiz
-- (örn: 3 numaralı sipariş 2025-05-20 tarihinde Yolda imiş) gibi