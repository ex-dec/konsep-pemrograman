#include <stdio.h>

int main(){
    int gaji, anak, masa, masuk, tunjangan;
    printf("aplikasi penghitung pendapatan bulanan\n");
    printf("gaji pokok : Rp ");
    scanf("%d", &gaji);
    printf("jumlah anak : ");
    scanf("%d", &anak);
    printf("masa kerja : ");
    scanf("%d", &masa);
    printf("masuk kerja per minggu : ");
    scanf("%d", &masuk);
    tunjangan = gaji + (5 / 100 * gaji * anak) + 1 / 10 * gaji;
    printf("pendapatan bulanan anda adalah : Rp %d\n", gaji + 1 / 10 * gaji + 5 / 100 * gaji * anak + 5000 * masa + 3000 * masuk - 3 / 20 * tunjangan - 20000);
}