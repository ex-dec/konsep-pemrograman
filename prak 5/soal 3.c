#include <stdio.h>

int main (){
    int pembelian, diskon;
    printf("masukkan total pembelian : Rp  ");
    scanf ("%d", &pembelian);
    if (pembelian >= 100000) {
        printf ("anda mendapatkan diskon sebesar 5 persen \n");
        diskon = pembelian * 5 / 100;
        printf ("besar diskon = Rp %d\n", diskon);
        pembelian = pembelian - diskon ;
        printf ("jumlah yang dibayarkan : Rp %d\n", pembelian);
    }
    else {
        printf ("anda tidak mendapatkan diskon\n");
        printf ("jumlah yang dibayarkan : Rp %d\n", pembelian);
    }
    return 0;
}