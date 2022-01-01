#include <stdio.h>

int main(){
    int n, m;
    printf("masukkan nilai n : ");
    scanf("%d", &n);
    for (m = 1; m <= n; m++)
    {
        printf("%d ", m);
        if (m != n)
        {
            m = m + 1;
            printf("-%d ", m);
        }
    }
    return 0;
}