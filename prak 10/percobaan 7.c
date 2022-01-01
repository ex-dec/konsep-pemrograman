#include <stdio.h>

int main(){
    int a, b, c, d, e = 0;
    printf("Masukkan berapa biaya awal : Rp ");
    scanf ("%d", &a);
    printf("Berapa cicilan yang mampu dibayarkan tiap bulan : Rp ");
    scanf ("%d", &b);
    printf("Berapa rata-rata kenaikan tiap tahun (%%) : ");
    scanf ("%d", &c);
    d = a;
    while (d > 0)
    {
        e++;
        d = d - b;
        if (e % 12 == 0)
        {
            d = d + a * c / 100;
        }
    }
    printf("Waktu yang dibutuhkan untuk melunasi biaya haji adalah %d bulan \n", e);
}