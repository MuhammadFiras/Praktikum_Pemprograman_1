#include <stdio.h>
void Biodata(int tahunlahir,char Namaku[40], char Asal[40]) {
    int tahun_sekarang = 2023, akt_masuk_prodi = 2023;
    printf("\nPerkenalkan Nama Saya : %s\n", Namaku);
    printf("Umur Saya : %d\n", tahun_sekarang - tahunlahir);
    printf("Saya Adalah Angkatan : %d\n", akt_masuk_prodi);
    printf("Asal Saya dari : %s", Asal);
// Lengkapi Function ini
}
int main() {
    int tahunLahir;
    char Namaku[40], Asal[40];
    scanf(" %d",&tahunLahir);
    scanf(" %[^\n]%*c",&Namaku);
    scanf(" %[^\n]%*c",&Asal);
    Biodata(tahunLahir, Namaku, Asal);
    return 0;
}