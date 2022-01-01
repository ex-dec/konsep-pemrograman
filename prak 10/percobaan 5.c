#include <stdio.h>

int main(){
    char kar;
    int jum_kar = 0, jum_space = 0;
    printf("masukkan kalimat : ");
    while((kar = getchar()) != '\n')
    {
        if (kar == ' ')
        {
            jum_space++;
        }
        else
        {
            jum_kar++;
        }
    }
    printf("Jumlah karakter = %d\n", jum_kar); 
    printf("Jumlah SPASI = %d\n", jum_space);
}