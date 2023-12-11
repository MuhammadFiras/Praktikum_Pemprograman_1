#include<stdio.h>
#include<string.h>

int main() {
    char baris1[25],baris2[25];
    int i,j,bintang=0,pagar=0;

    scanf("%[^\n]%*c",&baris1);
    scanf("%[^\n]%*c",&baris2);
 
    int length1=strlen(baris1), length2=strlen(baris2);
    if (length1!=length2) {
        printf("Panjang kalimat berbeda, pesan palsu");
        return 0;
    }
    for (i=0;i<length1;i++) {
        if (baris1[i]==baris2[i]) {
            bintang++;
            printf("*");
        }
        else if (baris1[i]!=baris2[i]) {
            pagar++;
            printf("#");
        }
    }
    printf("\n*=%d\n", bintang);
    printf("#=%d\n", pagar);
    if(bintang>=pagar) {
        printf("Pesan Asli");
    }
    else if (bintang<pagar) {
        printf("Pesan Palsu");
    }
}