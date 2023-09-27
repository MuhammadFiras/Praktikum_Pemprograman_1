putaran = round(5, 2)
jarak_tempuh = round(14, 2)
phi = 3.14

print("Diketahui :")
print("Pak Dengklek mengelilingi taman = %d putaran" %(putaran))
print("Jarak tempuh Pak Dengklek = %d Kilometer\n" %jarak_tempuh)
print("Jawaban : ")
print("Jari-jari taman yang dikelilingi Pak Dengklek adalah", float(round((jarak_tempuh/putaran)/(2*phi), 2)),"Kilometer")

