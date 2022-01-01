#include <stdio.h>

int main(){
    int a, b = 1, c, d = 0;
    printf("masukkan batas bilangan : ");
    scanf("%d", &a);
    for (; b <= a; b++)
    {
        for (c = 1; c <= b; c++)
        {
            d++;
            printf("%d ", d);
        }
    printf("\n");
    }
}