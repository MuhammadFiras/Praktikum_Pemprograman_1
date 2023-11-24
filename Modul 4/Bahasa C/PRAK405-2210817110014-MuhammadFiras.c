#include <stdio.h>

int main()
{
    int n, banyak_baris;
    int hasil_total= 0;
    scanf("%d %d", &banyak_baris, &n);

    for (int i = 1; i <= banyak_baris; i++)
    {
        int hasil_baris = 0;
        printf("(");
        for (int j = i; j >= 1 ; j--)
        {
            hasil_baris += j*n;
            printf("%d * %d", j, n);
            if (j>1)
            {
                printf(" + ");
            }
        }
        hasil_total += hasil_baris;
        printf(") = %d\n", hasil_baris);
    }
    printf("%d", hasil_total);
    return 0;
}