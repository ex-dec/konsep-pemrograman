#include <stdio.h>

int main(){
    int ganjil = 0;
    int genap = 0;
    int i;
    int n;
    printf("Masukkan nilai n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            ganjil += i;
        } else {
            genap += i;
        }
    }
    printf("Jumlah bilangan ganjil : %d\n", ganjil);
    printf("Jumlah bilangan genap  : %d\n", genap);
    return 0;
}