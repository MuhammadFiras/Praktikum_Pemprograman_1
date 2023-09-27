#include<stdio.h>

int main()
{
    float putaran = 5;
    float jarak_tempuh = 14;
    float phi = 3.14;

    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %1.0f putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %1.0f Kilometer \n \n", jarak_tempuh);
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %1.2f Kilometer", (jarak_tempuh/putaran)/(2*phi));


}