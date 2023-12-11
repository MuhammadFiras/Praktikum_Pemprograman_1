#include<stdio.h>
int main() {
    int jumlah_ruangan, i, x, zetsu_awal;
    scanf("%d", &jumlah_ruangan);
    int bunshin_zetsu[jumlah_ruangan]; 
    for (i=0;i<jumlah_ruangan;i++) {
        scanf("%d", &zetsu_awal);
        bunshin_zetsu[i] = zetsu_awal; 
    }
    for(x=0;x<jumlah_ruangan;x++) {
        printf("%d ", bunshin_zetsu[x]*(x+1));
    }
}