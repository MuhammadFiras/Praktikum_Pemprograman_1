#include<stdio.h>

int main() {
    int angka1, angka2, awal;
    scanf("%d %d", &angka1, &angka2);
    if (angka1>angka2) {
        for (awal=angka2; awal<=angka1; angka1--, angka2++) {
            printf("%d", angka1);
            printf(" %d", angka2);
            if (awal<angka1) { 
                printf(" - ");
            }
        }
    }
    else if (angka1<angka2) {
        for (awal = angka1; awal<=angka2; angka1++, angka2--) {
            printf("%d", angka1);
            printf(" %d", angka2);
            if (awal<angka2) {
                printf(" - ");
            }
        }
    }
}