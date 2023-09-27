#include<stdio.h>

int main()
{
    int sisi1 = 4;
    int sisi2 = 5;
    int sisi3 = 7;
    int Harga_tanah = 85000;

    printf("Diketahui : \n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", sisi1+sisi2+sisi3);
    printf("Harga tanah Per Meter adalah %d\n", Harga_tanah);
    printf("Jawaban : \n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d ", (sisi1+sisi2+sisi3)*Harga_tanah);



}