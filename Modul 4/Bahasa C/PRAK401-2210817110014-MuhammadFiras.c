#include<stdio.h>

int main () {
    int awal, input_bilangan;
    char simbol;
    scanf("%d %c", &input_bilangan,&simbol);
    for(awal=1;awal<=50;awal++) {
        if (awal % input_bilangan == 0) {
            printf("%c ", simbol);
        }
        else {
            printf("%d ", awal); 
        }
    }
}