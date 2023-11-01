#include<stdio.h>

int main() 
{
    int bil;
    scanf("%d", &bil);

    if (bil>0) {
        printf("positif");
    }
    else if (bil<0) {
        printf("negatif");
    }
    else{
        printf("nol");
    }
}