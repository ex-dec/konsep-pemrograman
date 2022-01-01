#include <stdio.h>

int main(){
    int a, b, c, n;
    char balik;
    do
    {
        printf("input : ");
        scanf("%d", &n);
        c = 0;
        for (a = 1; a <= n;a++)
        {
            c++;
            for (b = 1 ;b <= a;b++)
            {
                printf ("%d ", c);
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
    printf("\n");
}