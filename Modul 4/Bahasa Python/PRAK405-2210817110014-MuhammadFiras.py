a, b = input().split() 
a = int(a)
b = int(b) 
h = 0
h2 = 0
h3 = 0 
i = 0
while i < a:
    i += 1
    j = i
    if i == 0:
        break 
    while j > 0:
        j -= 1
        print("(%d * %d)" % (j + 1, b), end=' ') 
        if j > 0:
            print(" + ", end=' ') 
    h = i * b
    h2 += h
    print(" = %d" % (h2)) 
    h3 += h2
print("%d"%(h3))
