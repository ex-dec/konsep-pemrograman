#include <stdio.h>

int main (){
    int a;
    printf("Masukkan bilangan bulat : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Minggu\n");
        break;
    case 2:
        printf("Senin\n");
        break;
    case 3:
        printf("Selasa\n");
        break;
    case 4:
        printf("Rabu\n");
        break;
    case 5:
        printf("Kamis\n");
        break;
    case 6:
        printf("Jumat\n");
        break;
    case 7:
        printf("Sabtu\n");
        break;
    default:
        printf("Hari tidak valid\n");
        break;
    }
}