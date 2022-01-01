#include <stdio.h>
void max(int, int, int *);

int main(){
    int a, b, c;
    a = 1000;
    b = 30;
    printf("nilai a = %d\n", a);
    printf("nilai b = %d\n", b);
    max(a, b, &c);
    printf("terbesar = %d \n", c);
    return 0;
}
void max(int a, int b, int *c){
    if (a >= b)
    {
        *c = a;
    }
    else
    {
        *c = b;
    }
}