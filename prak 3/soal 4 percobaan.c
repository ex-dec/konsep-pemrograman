#include <stdio.h>
int main(){
    int a, b, c, d;
    printf("kalkulator diskriminan\n");
    printf("rumus D = b * b - 4ac\n");
    printf("masukkan nilai a : ");
    scanf("%d", &a);
    printf("masukkan nilai b : ");
    scanf("%d", &b);
    printf("masukkan nilai c : ");
    scanf("%d", &c);
    d = b * b - 4 * a * c;
    printf("hasil : %d\n", d);
    return 0;
}