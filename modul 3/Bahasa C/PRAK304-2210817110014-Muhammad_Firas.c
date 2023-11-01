#include<stdio.h>

int main() 
{
    int bil;
    scanf("%d", &bil);

    switch (bil) 
    {
        case 1 ... 9:
            printf("Satuan");
        break;
        case 0:
            printf("Nol");
        break;
        case 100 ... 1000:
            printf("Anda Menginput Melebihi Limit Bilangan");
        break;
        case 20 ... 99:
            printf("Puluhan");
        break;
        case 10 ... 19:
            printf("Belasan");
        break;
    }
}