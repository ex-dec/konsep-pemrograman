#include <stdio.h>

int main(){
    int a, angka, faktor = 0;
    printf("masukkan angka : ");
    scanf("%d", &angka);
    for (a = 1; a <= angka; a++)
    {
        if (angka % a == 0)
        {
            faktor = faktor + 1;
        }
    }
    if (faktor == 2)
    {
        printf("Bilangan tersebut merupakan bilangan prima\n");
    }
    else
    {
        printf("Bilangan tersebut bukan bilangan prima\n");
    }
    return 0;
}