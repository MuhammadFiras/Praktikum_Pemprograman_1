import math
alas = 5
tinggi = 12

print("Diketahui :")
print("Alas = %d cm" %alas)
print("Tinggi = %d cm \n" %tinggi)
print("Jawab :")
print("Sisi A = %d cm" %tinggi)
#menggunakan rumus phytagoras
print("Sisi B = %d cm" %round(math.sqrt((alas**2)+(tinggi**2))))
miring = 13
print("Sisi C = %d cm" %alas)
print("Keliling = %d cm" %(alas+tinggi+miring))
print("Luas = %d cm" %(1/2*alas*tinggi))