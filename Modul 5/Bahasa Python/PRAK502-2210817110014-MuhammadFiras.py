def mutlak(angka):
    if (angka < 0):
        angka = -angka
        return angka
    else:
        return angka
    
def hitung(nilai1, nilai2):
    int = nilai1, nilai2
    angka1 = mutlak(nilai1 - nilai2)
    return angka1

a,c,b,d = map(int, input("").split())
Hasil = hitung(a,b) + hitung(c,d)
hasil_tambah = mutlak(Hasil)
print(hasil_tambah)