#include <stdio.h>

int main(){
    int a, n, maksimum = -2147483648, minimum = 2147483647, nilai;
    float total = 0;
    char balik;
    do
    {
    printf("jumlah data = ");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        printf("nilai ke %d : ", a);
        scanf("%d", &nilai);
        if (nilai <= minimum)
        {
            minimum = nilai;
        }
        if (nilai >= maksimum)
        {
            maksimum = nilai;
        }
        total = total + nilai;
    }
    printf("nilai maksimum dari data tersebut adalah : %d\n", maksimum);
    printf("nilai minimum dari data tersebut adalah : %d\n", minimum);
    printf("nilai rata-rata dari data tersebut adalah : %g\n",  total / n);
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