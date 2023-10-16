#include<stdio.h>

int main() {
    double phi = 3.142857, r, t;
    scanf("%lf %lf", &r, &t);

    double volume = phi*r*r*t;
    double luas = 2*phi*r*(r+t);
    double keliling = 2*phi*r;

    printf("Volume = %.2lf\n", volume);
    printf("Luas = %.2lf\n", luas);
    printf("Keliling = %.2lf", keliling);


}