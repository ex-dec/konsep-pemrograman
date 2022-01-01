#include <stdio.h>

int main(){
    int a, b, jum;
    jum = 0;
    printf("Jumlah angka dari bilangan ");
    scanf("%d", &a);
    while ( a != 0)
    {
        b = a % 10;
        a = a / 10;
        jum = jum + b;
    }
    printf ("adalah %d\n", jum);
}