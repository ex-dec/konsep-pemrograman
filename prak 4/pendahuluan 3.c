#include <stdio.h>

int main(){
    int tiket, harga, sisa;
    harga = 50000;
    printf("masukkan jumlah tiket yang ingin dibeli : ");
    scanf("%d", &tiket);
    sisa = tiket % 3 ;
    tiket = tiket / 3;
    printf("jumlah uang yang harus dibayarkan adalah Rp %d\n", tiket * harga * 2 + sisa * harga);
    return 0;
}