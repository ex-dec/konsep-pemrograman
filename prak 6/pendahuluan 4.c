#include <stdio.h>

int main(){
    int nilai;
    printf("masukkan nilai berupa angka : ");
    scanf("%d", &nilai);
    if (nilai <= 40)
    {
        printf("nilai huruf adalah E\n");
    }
    else if (nilai <= 55)
    {
        printf("nilai huruf adalah D\n");
    }
    else if (nilai <= 60)
    {
        printf("nilai huruf adalah C\n");
    }
    else if (nilai <= 80)
    {
        printf("nilai huruf adalah B\n");
    }
    else if (nilai <= 100)
    {
        printf("nilai huruf adalah A\n");
    }
    else
    {
        printf("nilai yang anda inputkan tidak sesuai\n");
    }
}