#include<stdio.h>

int main() {
    //input//
    double a, b;
    printf("Masukkan Nilai Pertama: "), scanf("%lf", &a);
    printf("Masukkan Nilai Kedua: "), scanf("%lf", &b);
    
    double hasil_tambah = a+b;
    //output//
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2lf\"", a, b, hasil_tambah);
}