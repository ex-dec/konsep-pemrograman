#include <stdio.h>
#include <stdlib.h>

int main(){
    int jam, a, nilai_a, jum_jam;
    char nilai;
    float jum_nilai;
    for ( a = 1 ; a <= 5; a++)
    {
        printf("Nilai mata kuliah %d : ", a);
        scanf("%c", &nilai);
        fflush(stdin);
        printf("Jumlah jam matkul %d : ", a);
        scanf("%d", &jam);
        fflush(stdin);
        switch (nilai)
        {
        case 'A':
            nilai_a = 4;
            break;
        case 'a':
            nilai_a = 4;
            break;
        case 'B':
            nilai_a = 3;
            break;
        case 'b':
            nilai_a = 3;
            break;
        case 'C':
            nilai_a = 2;
            break;
        case 'c':
            nilai_a = 2;
            break;
        case 'D':
            nilai_a = 1;
            break;
        case 'd':
            nilai_a = 1;
            break;
        case 'E':
            nilai_a = 0;
            break;
        case 'e':
            nilai_a = 0;
            break;        
        default:
            printf("nilai anda salah\n");
            break;
        }
        jum_nilai += nilai_a * jam;
        jum_jam += jam;
    }
    jum_nilai = jum_nilai / jum_jam;
    printf("IPS anda pada semester ini adalah : %g \n", jum_nilai);
    return 0;
}