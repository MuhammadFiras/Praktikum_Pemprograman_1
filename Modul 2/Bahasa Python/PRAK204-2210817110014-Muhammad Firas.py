angka = [0,1]
angka = list(map(float, input("").split()))

jari2 = float(angka[0])
tinggi = float(angka[1])
phi = 3.142857

volume = phi*jari2*jari2*tinggi
luas = 2*phi*jari2*(jari2+tinggi)
keliling = 2*phi*jari2

print("Volume = %.2f" %volume)
print("Luas = %.2f" %luas)
print("Keliling = %.2f" %keliling)
