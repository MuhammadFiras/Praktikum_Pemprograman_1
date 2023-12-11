#include<stdio.h>
int main() {
    int baris1,baris2,i,j,z,isi1,isi2;
    scanf("%d %d", &baris1, &baris2);
    int isi_baris1[baris1], isi_baris2[baris2];
    if (baris1!=baris2) {
        printf("Jumlah Tidak Sama");
        return 0;
    }
    for (i=0;i<baris1;i++) {
        scanf("%d",&isi1);
        isi_baris1[i]=isi1;
    }
    for (j=0;j<baris2;j++) {
        scanf("%d",&isi2);
        isi_baris2[j]=isi2;
    }
    for (z=0;z<baris1;z++) {
        printf("%d ", isi_baris1[z]*isi_baris2[z]);
    }
}