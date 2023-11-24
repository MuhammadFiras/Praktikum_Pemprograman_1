#include <stdio.h>
int reverse(int n){
    int reversee = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        reversee = reversee * 10 + remainder;
        n = n / 10;
    }
    return reversee;
}
int main() {
    int A, B;
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
    int C = A+B;
    printf("%d",reverse(C));
}