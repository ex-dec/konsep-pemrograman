#include <stdio.h>

int main(){
    int angka;
    printf ("input = ");
    scanf ("%d", &angka);
    printf("bilangan yang diinputkan adalah %d\n", angka);
    if (angka % 2 == 0) {
        printf("bilangan tersebut merupakan bilangan genap\n");
    }
    else {
        printf("bilangan tersebut merupakan bilangan ganjil\n");
    }
    return 0;
}