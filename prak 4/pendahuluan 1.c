#include <stdio.h>

int main(){
    float F , C;
    printf("Masukkan nilai yang akan dikonversi dari Celcius menjadi Fahrenheit : ");
    scanf("%f", &C);
    F = C * 1.8 + 32 ;
    printf("hasil konversi\n");
    printf("Fahrenheit : %G\n", F);
    return 0;
}