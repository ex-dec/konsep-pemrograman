#include <stdio.h>

int main(){
    struct date {
        int tanggal;
        int bulan;
        int tahun;
    };
    struct date today, yesterday;
    printf("masukkan tanggal hari ini (dd mm yyyy): ");
    scanf("%2d %2d %4d", &today.tanggal, &today.bulan, &today.tahun);
    yesterday.tahun = today.tahun;
    yesterday.bulan = today.bulan;
    if (today.bulan == 3) {
        if (today.tahun % 4 == 0 && today.tahun % 100 != 0 || today.tahun % 100 == 0 && today.tahun % 400 == 0) {
            if (today.tanggal == 1) {
                yesterday.tanggal = 29;
                yesterday.bulan--;
            } else {
                yesterday.tanggal = today.tanggal - 1;
            }
        } else {
            if (today.tanggal == 1) {
                yesterday.tanggal = 28;
                yesterday.bulan--;
            } else {
                yesterday.tanggal = today.tanggal - 1;
            }
        }
    } else {
        if (today.tanggal == 1) {
            switch (today.bulan) {
                case 1:
                    yesterday.tanggal = 31;
                    yesterday.bulan = 12;
                    yesterday.tahun = today.tahun - 1;
                    break;
                case 5:
                case 7:
                case 10:
                case 12:
                    yesterday.tanggal = 30;
                    yesterday.bulan--;
                    break;
                default:
                    yesterday.tanggal = 31;
                    yesterday.bulan--;
                    break;
            }
        } else {
            yesterday.tanggal = today.tanggal -1;
        }
    }
    printf("Tanggal kemarin adalah : %d %d %d\n", yesterday.tanggal, yesterday.bulan, yesterday.tahun);
}