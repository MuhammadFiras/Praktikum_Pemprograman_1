#include<stdio.h>
#include<math.h>

int main()
{
    double alas = 5;
    double tinggi = 12;

    printf("Diketahui : \n");
    printf("Alas = %1.0lf cm\n", alas);
    printf("Tinggi = %1.0lf cm\n \n", tinggi);
    printf("Jawab : \n");
    printf("Sisi A = %1.0lf cm\n", tinggi);
    //selanjutnya kita gunakan rumus phytagoras supaya dapat sisi B
    printf("Sisi B = %1.0lf cm\n", sqrt((alas*alas)+(tinggi*tinggi)));
    double miring = 13;
    printf("Sisi C = %1.0lf cm\n", alas);
    printf("Keliling = %1.0lf cm\n", alas+tinggi+miring);
    //lalu pakai rumus luas segitiga
    printf("Luas = %1.0lf cm", 0.5*alas*tinggi);
}