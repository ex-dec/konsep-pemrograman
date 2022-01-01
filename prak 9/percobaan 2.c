#include <stdio.h>

int main(){
    int a, b = 0;
    printf("masukkan nilai : ");
    scanf("%d", &a);
    for (;a > 0; a--)
    {
        if (a != 1)
        {
            printf("%d + ", a);
        }
        else
        {
            printf("%d = ", a);
        }
        b = b + a;
    }
    printf("%d\n", b);
}