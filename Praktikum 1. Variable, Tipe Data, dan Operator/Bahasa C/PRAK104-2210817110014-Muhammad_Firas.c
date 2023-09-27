#include<stdio.h>

int main()
{
    int A = 400000;
    int B = 350000;
    int discount_A = 13;
    int discount_B = 21;
    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d\n", discount_A, (A-(discount_A*A)/100));
    printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %d\n", discount_B, (B-(discount_B*B)/100));
  
}