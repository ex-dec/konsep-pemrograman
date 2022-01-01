#include <stdio.h>

int main(){
    float bil1, bil2;
    printf  ("masukkan bilangan 1    : ");
    scanf   ("%f", &bil1);
    printf  ("masukkan bilangan 2    : ");
    scanf   ("%f", &bil2);
    if (bil2 == 0) {
        printf  ("Division by zero\n");
    }
    else {
        bil1 = bil1 / bil2;
        printf ("hasil bagi dari bilangan 1 dengan bilangan 2 adalah    : %.3f\n", bil1);
    }
    return 0;
}