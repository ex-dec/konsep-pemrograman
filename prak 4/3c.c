#include <stdio.h>

int main (){
    int x;
    printf("aplikasi penghitung polynominal\n");
    printf("fungsi == 3x^2 - 5x + 6\n");
    printf("masukkan nilai x : ");
    scanf("%d", &x);
    x = 3 * x * x - 5 * x + 6 ;
    printf("f(x) = %d\n", x);
    return 0;
}