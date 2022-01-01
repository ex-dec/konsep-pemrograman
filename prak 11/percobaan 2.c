#include <stdio.h>

int main(){
    int a, n;
    char balik;
    do
    {
    printf("n = ");
    scanf("%d", &n);
    for (a = 1; a <= n; a += 2)
    {
        if ( a % 3 == 0)
        {
            continue;
        }
        else
        {
            printf("%d ", a);
        }
    }
    printf("\n");
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