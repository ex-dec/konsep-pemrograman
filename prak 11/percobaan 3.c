#include <stdio.h>

int main(){
    int a;
    int n;
    char balik;
    do
    {
    printf("n = ");
    scanf("%d", &n);
    for (a = 1; a <= n ; a += 2 )
    {
        if (a >= 100)
        {
            break;
        }
        if ( a % 7 == 0)
        {
            continue;
        }
        else if ( a % 11 == 0)
        {
            continue;
        }
        else
        {
            printf ("%d ", a);
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