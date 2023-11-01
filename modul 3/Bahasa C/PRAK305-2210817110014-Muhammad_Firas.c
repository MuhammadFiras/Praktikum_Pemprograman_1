#include<stdio.h>

int main() 
{
    int angka;
    scanf("%d", &angka);
    int hari = angka / 86400;
    int sisa_hari = angka % 86400;
    int jam = sisa_hari / 3600;
    int sisa_jam = angka % 3600; 
    int menit = sisa_jam / 60;
    int detik = angka % 60;

    if (angka >= 86400) {
        printf("%d hari %d:%d:%d", hari,jam,menit,detik);
    }
    else if (angka > 20000) {
        printf("0%d:%d:0%d",jam,menit,detik);
    }
    else if (angka > 3600) {
        printf("0%d:%d:%d",jam,menit,detik);
    }
    else if (angka == 3600) {
        printf("0%d:0%d:0%d",jam,menit,detik);
    }
    else {
        printf("00:%d:%d", menit, detik);
    }
}