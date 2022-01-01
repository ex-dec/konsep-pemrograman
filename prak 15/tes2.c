#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#define PI 3.14159;
float panjangAB(float A, float c);
float radian(float derajat);

int main(){
    printf("=================================================================\n");
    printf("\t\tAplikasi Pengubah Bilangan Masukan\n");
    printf("=================================================================\n\n");
    float A, C, c, a, hasil;
    printf("%-15s", "Sudut A "); printf(": ");
    scanf("%f", &A);
    fflush(stdin);
    printf("%-15s", "Panjang AB "); printf(": ");
    scanf("%f", &c);
    fflush(stdin);
    printf("\n");
    hasil = panjangAB(A, c);
    printf("%-15s", "Panjang BC "); printf(": %.4f Meter\n", hasil);
    printf("\n\n=================================================================\n\n");
    system("PAUSE");
}

float panjangAB(float A, float c){
    float rad_C, rad_A, a;
    rad_A = radian(A);
    a = tan(rad_A) * c;
    return(a);
}

float radian(float derajat){
    float hasil;
    hasil = derajat / 180 * PI;
    return(hasil);
}