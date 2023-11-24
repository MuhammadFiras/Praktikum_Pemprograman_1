#include<stdio.h>

int main() {
    int input_bilangan, ganjil, genap;
    scanf("%d", &input_bilangan);

    for (ganjil=1; ganjil<=input_bilangan; ganjil++) {
        if (ganjil % 2 == 0) { 
        }
        else {
            printf("%d ", ganjil);
        } 
    }
    printf("\n");
    for (genap=input_bilangan; genap>=1; genap--) {
        if (genap % 2 != 0) { 
        }
        else {
            printf("%d ", genap);
        }
    }
}