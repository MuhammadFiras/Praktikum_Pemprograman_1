#include<stdio.h>

int main() 
{
    int bil;
    scanf("%d", &bil);

    switch (bil) 
    {
        case 80 ... 100:
            printf("A");
        break;
        case 70 ... 79:
            printf("B");
        break;
        case 60 ... 69:
            printf("C");
        break;
        case 50 ... 59:
            printf("D");
        break;
        case 0 ... 49:
            printf("E");
        break;
    }
}