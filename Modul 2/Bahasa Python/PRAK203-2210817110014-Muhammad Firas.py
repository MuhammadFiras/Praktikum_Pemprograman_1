huruf = [0,1,2,3,4,5]
huruf = list(map(float, input("").split()))

a = float(huruf[0])
b = float(huruf[1])
i = float(huruf[2])
j = float(huruf[3])
x = float(huruf[4])
y = float(huruf[5])
hasil = (a-b)*(i/j)-(x+y)
print("%.3f" %hasil)

    
    