toplam = 0

for n in range(1, 201):
    denklem = 3 * n + pow(-1, n)
    toplam = toplam + denklem
    print("n=" + str(n) + (" olduğunda sonuç: ") + str(denklem))

print("Dizideki elemanlar toplamı: " + str(toplam))
kalan = toplam % 5
print("5'e bölümünden kalan:", kalan)