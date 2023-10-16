import math

angka = [0,1]
angka = list(map(int, input("").split()))

a = int(angka[0])
b = int(angka[1])
c_alas = math.sqrt((b**2)-(a**2))
keliling = a+b+c_alas
luas = 0.5*c_alas*a

print("Alas = %d cm" %c_alas)
print("Tinggi = %d cm" %a)
print("Keliling = %d cm" %keliling)
print("Luas = %d cm^2" %luas)
