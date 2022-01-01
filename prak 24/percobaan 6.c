#include <stdio.h>

int main() {
    int x = 1, y = 2, *ip;
    ip = &x;
    y = *ip;
    *ip = 3;
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
