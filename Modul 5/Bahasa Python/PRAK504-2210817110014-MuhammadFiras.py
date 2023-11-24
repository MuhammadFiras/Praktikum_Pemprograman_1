def reverse(n):
    reversee = 0
    while (n != 0):
        remainder = n % 10
        reversee = reversee * 10 + remainder
        n = n // 10
    return reversee

A,B = map(int, input("").split())
A = reverse(A)
B = reverse(B)
C = A + B
C = reverse(C)
print(C)