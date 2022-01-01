#include <stdio.h>

int main(){
    int b1, b2;
    printf("masukkan bilangan pertama   : ");
    scanf ("%d", &b1);
    printf("masukkan bilangan kedua     : ");
    scanf ("%d", &b2);
    if (b1 % b2 == 0){
        printf ("Bilangan pertama adalah kelipatan persekutuan bilangan kedua\n");
    }
    else {
        printf ("Bilangan pertama bukan kelipatan persekutuan bilangan kedua\n");
    }
    return 0;
}