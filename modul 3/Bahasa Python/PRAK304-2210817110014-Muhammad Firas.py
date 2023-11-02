angka = int(input(""))

if (angka>0) and (angka<10):
    print("Satuan")

elif (angka>99):
    print("Anda Menginput Melebihi Limit Bilangan")

elif (angka>=20<100):
    print("Puluhan")

elif (angka>=10<20):
    print("Belasan")

else:
    print("Nol")
