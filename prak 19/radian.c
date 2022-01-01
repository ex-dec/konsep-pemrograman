#include <stdio.h>
#include <math.h>
#define PI 3.14159f
float radian(float derajat) {
    return derajat / 180 * PI;
}

int main() {
    float derajat = 90;
    float rad = radian(derajat);
    printf("%g\n", rad);
    return 0;
}
