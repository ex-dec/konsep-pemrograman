#include <stdio.h>
int main(){
    int uang;
    printf("masukkan nilai yang akan dikonversi dari dollar ke rupiah : $ ");
    scanf("%d", &uang);
    uang = uang * 11090;
    printf("hasil konversi : Rp %d\n", uang);
    return 0;
}