#include <stdio.h> 
int main() {
    int baris, kolom, isi, i, j, x, y; 
    scanf("%d %d", &baris, &kolom); 
    int matrix[baris][kolom];
    for (i = 0; i < baris; i++) { 
        for (j = 0; j < kolom; j++) {
            scanf("%d", &isi); 
            matrix[i][j] = isi; 
        }
    }
    for (y = 0; y < baris; y++) { 
        for (x = 0; x < kolom; x++) {
            printf("%d ", matrix[y][x]);
        } 
        printf("\n");
    }
}
