angka = int(input(""))

hari = angka // 86400
sisa_hari = angka % 86400
jam = sisa_hari // 3600
sisa_jam = angka % 3600 
menit = sisa_jam // 60
detik = angka % 60

if (angka >= 86400):
    print("{} hari {}:{}:{}".format(hari, jam, menit, detik))

elif (angka >= 9000 <86400):
    print("0{}:{}:0{}".format(jam,menit,detik))

elif (angka > 3600 <9000):
    print("0{}:{}:{}".format(jam,menit,detik))

elif (angka == 3600):
    print("0{}:00:00".format(jam))
 
else: 
    print("00:{}:{}".format(menit,detik))