#include <stdio.h>

int main(){
    int a, b, n;
    char balik;
    do
    {
    printf("masukkan nilai n : ");
    scanf("%d", &n);
    for (a = 1; a <= n;a++)
    {
        for (b = 1 ;b <= n;b++)
        {
            printf ("%d ", b);
        }
        printf("\n");
    }
    do
    {
        printf("apakah anda ingin keluar? ");
        getchar();
        balik = getchar();
        if (balik == 'y' || balik == 't')
        {
            break;
        }
    } while (balik);
    if (balik == 'y')
    {
        break;
    }
    }
    while (balik);
}