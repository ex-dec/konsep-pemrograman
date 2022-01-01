#include <stdio.h>

int main(){
    int x;
    printf("program penghitung nilai absolut\n");
    printf("masukkan nilai yang akan dikonversi : ");
    scanf("%d", &x);
    if ( x < 0) {
        x = x * (-1);
        printf("hasil konversi : %d\n", x);
    }
    else
    {
        printf("hasil konversi : %d\n", x);
    }
    
}