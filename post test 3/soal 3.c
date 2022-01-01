#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAKS 100



int main() {
    struct zodiak {
        char nama [11];
        int tgl_awal;
        int bln_awal;
        int tgl_akhir;
        int bln_akhir;
    };
    struct zodiak bintang[1] = {"ARIES",21,3,19,4};
    struct zodiak bintang[2] = {"TAURUS",20,4,20,5};
    struct zodiak bintang[3] = {"GEMINI",21,5,20,6};
    struct zodiak bintang[4] = {"CANCER",21,6,20,7};
    struct zodiak bintang[5] = {"LEO",23,7,22,8};
    struct zodiak bintang6={"VIRGO",23,8,22,9};
    struct zodiak bintang7={"LIBRA",23,9,22,10};
    struct zodiak bintang8={"SCORPIO",23,10,21,11};
    struct zodiak bintang9={"SAGITARIUS",23,11,20,12};
    struct zodiak bintang10={"CAPRICORN",22,12,19,1};
    struct zodiak bintang11={"AQUARIUS",20,1,18,2};
    struct zodiak bintang12={"PISCES",19,2,20,3};

    int tgl, bulan;

    printf("Masukkan tanggal dan bulan lahir anda (DD MM) : ");
    scanf("%d %d", &tgl, &bulan);

    if ((tgl>=bintang[1].tgl_awal)&&(bulan==bintang[1].bln_awal)||((tgl<=bintang[1].tgl_akhir)&&(bulan==bintang1.bln_akhir))){
        printf("Zodiak anda adalah %s", bintang[1].nama);
    }
    else if ((tgl>=bintang2.tgl_awal)&&(bulan==bintang2.bln_awal)||((tgl<=bintang2.tgl_akhir)&&(bulan==bintang2.bln_akhir))){
        printf("Zodiak anda adalah %s", bintang[2].nama);
    }
     else if ((tgl>=bintang3.tgl_awal)&&(bulan==bintang3.bln_awal)||((tgl<=bintang3.tgl_akhir)&&(bulan==bintang3.bln_akhir))){
        printf("Zodiak anda adalah %s", bintang3.nama);
    }
     else if ((tgl>=bintang4.tgl_awal)&&(bulan==bintang4.bln_awal)||((tgl<=bintang4.tgl_akhir)&&(bulan==bintang4.bln_akhir))){
        printf("Zodiak anda adalah %s", bintang4.nama);
    }
     else if ((tgl>=bintang5.tgl_awal)&&(bulan==bintang5.bln_awal)||((tgl<=bintang5.tgl_akhir)&&(bulan==bintang5.bln_akhir))){
        printf("Zodiak anda adalah %s", bintang5.nama);
    }
     else if ((tgl>=bintang6.tgl_awal)&&(bulan==bintang6.bln_awal)||((tgl<=bintang6.tgl_akhir)&&(bulan==bintang6.bln_akhir))){
        printf("Zodiak anda adalah %s", bintang6.nama);
    }
     else if ((tgl>=bintang7.tgl_awal)&&(bulan==bintang7.bln_awal)||((tgl<=bintang7.tgl_akhir)&&(bulan==bintang7.bln_akhir))){
        printf("Zodiak anda adalah %s", bintang7.nama);
    }
     else if ((tgl>=bintang1.tgl_awal)&&(bulan==bintang8.bln_awal)||((tgl<=bintang8.tgl_akhir)&&(bulan==bintang8.bln_akhir))){
        printf("Zodiak anda adalah %s", bintang8.nama);
    }
     else if ((tgl>=bintang9.tgl_awal)&&(bulan==bintang9.bln_awal)||((tgl<=bintang9.tgl_akhir)&&(bulan==bintang9.bln_akhir))){
        printf("Zodiak anda adalah %s", bintang9.nama);
    }
     else if ((tgl>=bintang10.tgl_awal)&&(bulan==bintang10.bln_awal)||((tgl<=bintang10.tgl_akhir)&&(bulan==bintang10.bln_akhir))){
        printf("Zodiak anda adalah %s", bintang10.nama);
    }
     else if ((tgl>=bintang11.tgl_awal)&&(bulan==bintang11.bln_awal)||((tgl<=bintang11.tgl_akhir)&&(bulan==bintang11.bln_akhir))){
        printf("Zodiak anda adalah %s", bintang11.nama);
    }
     else if ((tgl>=bintang12.tgl_awal)&&(bulan==bintang12.bln_awal)||((tgl<=bintang12.tgl_akhir)&&(bulan==bintang12.bln_akhir))){
        printf("Zodiak anda adalah %s", bintang12.nama);
    }
    else{
        printf("Tanggal Invalid");
    }
}