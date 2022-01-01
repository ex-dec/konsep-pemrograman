#include <stdio.h>

int main(){
    float a, d = 0;
    a = 0;
    char b = 'y';
    int c = 0;
    do
    {
        c++;
        printf("masukkan bilangan ke-%d : ", c);
        scanf("%f", &a);
        d = d + a;
        printf("mau memasukkan data lagi? ");
        getchar();
        b = getchar();
    } while (b == 'Y' || b == 'y');
    printf("Total bilangan = %g\n", d);
}