#include <stdio.h>

int main (){
    int menu;
    float sisi_jari, tinggi;
    printf("Aplikasi Penghitung\n");
    printf("Menu Pilihan\n");
    printf("1. Menghitung Volume Kubus\n");
    printf("2. Menghitung Luas Lingkaran\n");
    printf("3. Menghitung Volume Silinder\n");
    printf("Masukkan pilihan anda : ");
    scanf("%d", &menu);
    switch (menu)
    {
    case 1:
        printf("Panjang sisi kubus : ");
        scanf("%f", &sisi_jari);
        printf("Volume Kubus = %g\n", sisi_jari * sisi_jari * sisi_jari);
        break;
    case 2:
        printf("Panjang jari-jari lingkaran : ");
        scanf("%f", &sisi_jari);
        printf("Luas Lingkaran = %g\n", 3.14 * sisi_jari * sisi_jari);
        break;
    case 3:
        printf("Panjang jari-jari lingkaran : ");
        scanf("%f", &sisi_jari);
        printf("Tinggi Silinder : ");
        scanf("%f", &tinggi);
        printf("Volume Silinder = %g\n", 3.14 * sisi_jari * sisi_jari * tinggi);
        break;
    default:
        printf("Kesalahan Input Menu");
        break;
    }
    return 0;
}