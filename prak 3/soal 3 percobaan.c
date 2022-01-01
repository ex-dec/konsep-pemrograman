#include <stdio.h>

int main(){
    int a=12, b=2, c=3, d=4;
    printf("a %% b = %d\n", a%b);
    printf("a - c = %d\n", a-c);
    printf("a + b = %d\n", a+b);
    printf("a / d = %d\n", a/d);
    printf("a / d * d + a %% d = %d\n", a/d*d+a%d);
    printf("a %% d / d * a - c = %d\n", a%d/d*a-c);
    return 0;
}