#include <stdio.h>

int main(){
    int a = 0, n, b = 1;
    printf("input : ");
    scanf("%d", &n);
    printf("output : ");
    while ( b <= n)
    {
        printf ("%d ", a);
        a = a + b;
        b++;
    }
    printf("\n");
}