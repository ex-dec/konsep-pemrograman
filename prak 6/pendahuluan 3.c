#include <stdio.h>

int main(){
    float a, b;
    int operasi;
    printf("Kalkulator Sederhana\n");
    printf("masukkan bilangan pertama : ");
    scanf("%f", &a);
    printf("masukkan bilangan kedua : ");
    scanf("%f", &b);
    printf("menu matematika\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("masukkan pilihan anda : ");
    scanf("%d", &operasi);
    if (operasi == 1)
    {
        printf("Hasil Operasi tersebut = %g\n", a + b);
    }
    else if (operasi == 2)
    {
        printf("Hasil Operasi tersebut = %g\n", a - b);
    }
    else if (operasi == 3)
    {
        printf("Hasil Operasi tersebut = %g\n", a * b);
    }
    else if (operasi == 4)
    {
        printf("Hasil Operasi tersebut = %g\n", a / b);
    }
    else
    {
        printf("pilihan yang anda masukkan salah\n");
    }
    return 0;
}