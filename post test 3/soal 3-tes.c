#include <stdio.h>
#define index 100

int main(){
    struct bintang {
        char rasi[index];
        int t_awal;
        int b_awal;
        int t_akhir;
        int b_akhir;
    } zodiak[12] = {
        {"aries",21,3,19,4}, 
        {"taurus",20,4,20,5}, 
        {"gemini",21,5,20,6}, 
        {"cancer",21,6,20,7}, 
        {"leo",23,7,22,8}, 
        {"virgo",23,8,22,9},
        {"libra",23,9,22,10}, 
        {"scorpio",23,10,21,11}, 
        {"sagitarius",23,11,20,12}, 
        {"capricorn",22,12,19,1}, 
        {"aquarius",20,1,18,2}, 
        {"pisces",19,2,20,3}
    };
    int tgl, bulan;
    int i;
    printf("Masukkan tanggal dan bulan lahir anda (DD MM) : ");
    scanf("%d %d", &tgl, &bulan);
    for (i = 0; i < 12; i++) {
        if ((tgl>=zodiak[i].t_awal)&&(bulan==zodiak[i].b_awal)||((tgl<=zodiak[i].t_akhir)&&(bulan==zodiak[i].b_akhir))) {
            printf("Zodiak anda adalah %s\n", zodiak[i].rasi);
        break;
        }
    }
    return 0;
}