#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("masukkan bilangan 1 : ");
    scanf("%d", &a);
    printf("masukkan bilangan 2 : ");
    scanf("%d", &b);
    printf("masukkan bilangan 3 : ");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        if (b < c)
        {
            ;
        }
        else
        {
            d = b;
            b = c;
            c = d;
        }
    }
    else if (b < a && b < c)
    {
        if (a < c)
        {
            d = a;
            a = b;
            b = d;
        }
        else
        {
            d = a;
            a = b;
            b = c;
            c = d;
        }
    }
    else
    {
        if (a < b)
        {
            d = a;
            a = c;
            c = b;
            b = d;
        }
        else
        {
            d = a;
            a = c;
            c = d;
        }
    }
    printf ("Bilangan setelah diurutkan : %d %d %d\n", a, b, c);
}