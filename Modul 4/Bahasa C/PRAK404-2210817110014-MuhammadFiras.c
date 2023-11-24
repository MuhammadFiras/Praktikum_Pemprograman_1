#include<stdio.h>

int main() {
    int pilihan;
    float nilai1,nilai2;
     
    while (pilihan!=5)
    {
        printf("Pilih Program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);
        if (pilihan>5) {
            printf("Input anda salah, silahkan coba lagi\n");
        continue;}
        else if (pilihan<1) {
            printf("Input anda salah, silahkan coba lagi\n");
        continue;}
        else if (pilihan==5) {
            printf("Terimakasih, telah menggunakan kalkulator MUHAMMAD FIRAS");
            break;}
        printf("Masukkan nilai pertama : ");
        scanf("%f", &nilai1);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &nilai2);
        if (pilihan==1) {
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, nilai1+nilai2);
        }
        else if (pilihan==2) {
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, nilai1-nilai2);
        }
        else if (pilihan==3) {
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, nilai1*nilai2);
        }
        else if (pilihan==4) {
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, nilai1/nilai2);
        }
        else if (pilihan==5) {
            printf("Terimakasih, telah menggunakan kalkulator MUHAMMAD FIRAS");
            break;
        }
    }
}