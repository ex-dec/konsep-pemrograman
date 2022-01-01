#include <stdio.h>

int main(){
    int a;
    printf("masukkan angka antara 1 sampai 7 : ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("Minggu\n");
    }
    else if (a == 2)
    {
        printf("Senin\n");
    }
    else if (a == 3)
    {
        printf("Selasa\n");
    }
    else if (a == 4)
    {
        printf("Rabu\n");
    }
    else if (a == 5)
    {
        printf("Kamis\n");
    }
    else if (a == 6)
    {
        printf("Jumat\n");
    }
    else if (a == 7)
    {
        printf("Sabtu\n");
    }
    else
    {
        printf("Hari tidak valid\n");
    }
    return 0;
}