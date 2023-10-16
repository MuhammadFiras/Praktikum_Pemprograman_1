#include<stdio.h>

int main() {
    //input//
    char name[100], NIM[100], Kelas_paralel[100], Ttl[100], Alamat[100], hobi[100], no_wa[100];
    printf("Nama                   : "), gets(name);
    printf("NIM                    : "), gets(NIM);
    printf("Kelas Paralel          : "), gets(Kelas_paralel);
    printf("Tempat/Tanggal Lahir   : "), gets(Ttl);
    printf("Alamat                 : "), gets(Alamat);
    printf("Hobby                  : "), gets(hobi);
    printf("No. HP                 : "), gets(no_wa);
    
    printf("\n");
    //output//
    printf("Nama                   : %s\n", name);
    printf("NIM                    : %s\n", NIM);
    printf("Kelas Paralel          : %s\n", Kelas_paralel);
    printf("Tempat/Tanggal Lahir   : %s\n", Ttl);
    printf("Alamat                 : %s\n", Alamat);
    printf("Hobby                  : %s\n", hobi);
    printf("No. HP                 : %s", no_wa);



}