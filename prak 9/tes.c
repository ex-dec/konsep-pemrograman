#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char nilai_huruf;
    float ips, nilai_angka, jumlahilai=0,jam, jumlahjam=0;
    puts("Menentukan IPS Semester\n");

    for(i=1; i<=5; i++)
    {

        printf("Nilai Mata Kuliah (A-E) %d : ", i);
        scanf("%c", &nilai_huruf);
        fflush(stdin);

        printf("Jumlah Jam\t\t  : ");
        scanf("%f", &jam);
        fflush(stdin);

        switch(nilai_huruf)
        {
            case 'A' : nilai_angka = 4; break;
            case 'a' : nilai_angka = 4; break;
            case 'B' : nilai_angka = 3; break;
            case 'b' : nilai_angka = 3; break;
            case 'C' : nilai_angka = 2; break;
            case 'c' : nilai_angka = 2; break;
            case 'D' : nilai_angka = 1; break;
            case 'd' : nilai_angka = 1; break;
            case 'E' : nilai_angka = 0; break;
            case 'e' : nilai_angka = 0; break;
            default : printf("!Error!\n");
        }
        jumlahilai = jumlahilai + nilai_angka * jam;
        jumlahjam = jumlahjam + jam;
    }
    ips = jumlahilai/jumlahjam;
    printf("Maka IPS semester ini adalah %.2f", ips);
    return 0;
}