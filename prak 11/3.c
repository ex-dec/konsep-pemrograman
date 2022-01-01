#include <stdio.h>

int main(){
    int a, b, c, d, n;
    printf("input : ");
    scanf("%d", &n);
    for ( (a = 1) && (b = 1) ; b <= n; a++)
    {
        if (a == 2)
        {
            printf("%d ", a);
            b++;
        }
        else if (a % 2 == 1 && a != 1)
        {
            c = 0;
            for (d = 1;d <=a;d++)
            {
            if (a % d == 0)
            {
                c++;
            }
            }
            if (c == 2)
            {
                b++;
                printf("%d ", a);
            }
        }
    }
    printf("\n");
}
