#include <stdio.h>

int main(){
    char kar;
    int jum_kar_bes = 0, jum_space = 0, angka = 0, jum_kar_kec = 0;
    printf("masukkan kalimat : ");
    while((kar = getchar()) != '\n')
    {
        if (kar == ' ') 
        {
            jum_space++;
        }
        if (48 <= kar && kar <= 57)
        {
            angka++;
        }
        if (65 <= kar && kar <= 90)
        {
            jum_kar_bes++;
        }
        if (97 <= kar && kar <= 122)
        {
            jum_kar_kec++;
        }
    }
    printf("Jumlah huruf besar= %d\n", jum_kar_bes); 
    printf("Jumlah huruf kecil= %d\n", jum_kar_kec); 
    printf("Jumlah SPASI = %d\n", jum_space);
    printf("Jumlah angka = %d\n", angka);
}