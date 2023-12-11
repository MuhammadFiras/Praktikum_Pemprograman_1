#include<stdio.h>

int main() {
    int ordo,i,j,k,total_hasil=0,isi1,isi2;
    scanf("%d", &ordo);
    int matrix1[ordo][ordo], matrix2[ordo][ordo], matrix3[ordo][ordo];

    printf("Matriks A\n");
    for (i = 0; i < ordo; i++) { 
        for (j = 0; j < ordo; j++) {
            scanf("%d", &isi1); 
            matrix1[i][j] = isi1;
        }
    }
    printf("Matriks B\n");
    for (i = 0; i < ordo; i++) { 
        for (j = 0; j < ordo; j++) {
            scanf("%d", &isi2); 
            matrix2[i][j] = isi2;
        }
    }
    
    for(i=0;i<ordo;i++) {
        for(j=0;j<ordo;j++) {
            for(k=0;k<ordo;k++) {
                total_hasil=total_hasil+matrix1[i][k]*matrix2[k][j];
            }
            matrix3[i][j]=total_hasil;
            total_hasil=0;
        }
    }

    printf("Matriks AXB\n");
    for (i=0;i<ordo;i++) {
        for (j=0;j<ordo;j++) {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
}