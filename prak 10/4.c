#include <stdio.h>

int main(){
    int a, b, c, d, e, f = 0;
    printf("Masukkan berapa biaya awal : Rp ");
    scanf ("%d", &a);
    printf("Berapa cicilan yang mampu dibayarkan tiap bulan : Rp ");
    scanf ("%d", &b);
    printf("Berapa rata-rata kenaikan tiap tahun (%%) : ");
    scanf ("%d", &c);
    printf("Bonus gaji tiap 6 bulan sekali : Rp ");
    scanf ("%d", &d);
    e = a;
    while (e > 0)
    {
        f++;
        e = e - b;
        if (f % 6 == 0)
        {
            e = e - d;
        }
        if (f % 12 == 0)
        {
            e = e + a * c / 100;
        }
    }
    printf("Waktu yang dibutuhkan untuk melunasi biaya haji adalah %d bulan \n", f);
}