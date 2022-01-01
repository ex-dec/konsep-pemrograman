#include <stdio.h>

int main(){
    int tgl, bulan;
    printf("masukkan tanggal lahir anda : ");
    scanf("%d", &tgl);
    printf("masukkan bulan lahir : ");
    scanf("%d", &bulan);
    switch (bulan)
    {
    case 1:
        if (tgl < 20)
        {
            printf("Bintang anda adalah Capricorn\n");
        }
        else
        {
            printf("Bintang anda adalah Aquarius\n");
        }
        break;
    case 2:
        if (tgl < 19)
        {
            printf("Bintang anda adalah Aquarius\n");
        }
        else
        {
            printf("Bintang anda adalah Pisces\n");
        }
        break;
    case 3:
        if (tgl < 21)
        {
            printf("Bintang anda adalah Pisces\n");
        }
        else
        {
            printf("Bintang anda adalah Aries\n");
        }
        break;
    case 4:
        if (tgl < 20)
        {
            printf("Bintang anda adalah Aries\n");
        }
        else
        {
            printf("Bintang anda adalah Taurus\n");
        }
        break;
    case 5:
        if (tgl < 21)
        {
            printf("Bintang anda adalah Taurus\n");
        }
        else
        {
            printf("Bintang anda adalah Gemini\n");
        }
        break;
    case 6:
        if (tgl < 21)
        {
            printf("Bintang anda adalah Gemini\n");
        }
        else
        {
            printf("Bintang anda adalah Cancer\n");
        }
        break;
    case 7:
        if (tgl < 23)
        {
            printf("Bintang anda adalah Cancer\n");
        }
        else
        {
            printf("Bintang anda adalah Leo\n");
        }
        break;
    case 8:
        if (tgl < 23)
        {
            printf("Bintang anda adalah Leo\n");
        }
        else
        {
            printf("Bintang anda adalah Virgo\n");
        }
        break;
    case 9:
        if (tgl < 23)
        {
            printf("Bintang anda adalah Virgo\n");
        }
        else
        {
            printf("Bintang anda adalah Libra\n");
        }
        break;
    case 10:
        if (tgl < 23)
        {
            printf("Bintang anda adalah Libra\n");
        }
        else
        {
            printf("Bintang anda adalah Scorpio\n");
        }
        break;
    case 11:
        if (tgl < 22)
        {
            printf("Bintang anda adalah Scorpio\n");
        }
        else
        {
            printf("Bintang anda adalah Sagitarius\n");
        }
        break;
    case 12:
        if (tgl < 22)
        {
            printf("Bintang anda adalah Sagitarius\n");
        }
        else
        {
            printf("Bintang anda adalah Capricorn\n");
        }
        break;
    default:
        printf("masukkan anda salah\n");
        break;
    }
}