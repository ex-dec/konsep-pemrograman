#include <stdio.h>
int main(){
    float a, b, c, d;
    printf("kalkulator diskriminan\n");
    printf("rumus D = b * b - 4ac\n");
    printf("masukkan nilai a : ");
    scanf("%f", &a);
    printf("masukkan nilai b : ");
    scanf("%f", &b);
    printf("masukkan nilai c : ");
    scanf("%f", &c);
    d = b * b - 4 * a * c;
    printf("hasil : %.2f\n", d);
    return 0;
}