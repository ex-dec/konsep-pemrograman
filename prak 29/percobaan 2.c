#include <stdio.h>

struct date {
    int tanggal, bulan, tahun;
} today, tomorrow;

int main(){
    printf("Masukkan tanggal sekarang [dd mm yyyy]\t: ");
    scanf("%d %d %d", &today.tanggal, &today.bulan, &today.tahun);
    tomorrow.tahun = today.tahun;
    tomorrow.bulan = today.bulan;
    tomorrow.tanggal = today.tanggal;
    if (today.bulan == 2) {
        if (today.tahun % 4 == 0 && today.tahun % 100 != 0 || today.tahun % 100 == 0 && today.tahun % 400 == 0) {
            if (today.tanggal == 29) {
                tomorrow.tanggal = 1;
                tomorrow.bulan++;
            } else {
                tomorrow.tanggal++;
            }
        } else {
            if (today.tanggal == 28) {
                tomorrow.tanggal = 1;
                tomorrow.bulan++;
            } else {
                tomorrow.tanggal++;
            }
        }
    } else {
        if (today.tanggal == 31) {
            switch (today.bulan) {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                    tomorrow.tanggal = 1;
                    tomorrow.bulan++;
                    break;
                case 12:
                    tomorrow.tanggal = 1;
                    tomorrow.bulan = 1;
                    tomorrow.tahun++;
                    break;
            }
        } else if (today.tanggal == 30) {
            switch (today.bulan) {
                case 4:
                case 6:
                case 9:
                case 11:
                    tomorrow.tanggal = 1;
                    tomorrow.bulan++;
                    break;
                default:
                    tomorrow.tanggal++;
                    break;
            }
        } else {
            tomorrow.tanggal++;
        }
    }
    printf("Tanggal besok adalah\t\t\t: %02d %02d %4d\n", tomorrow.tanggal, tomorrow.bulan, tomorrow.tahun);
    return 0;
}