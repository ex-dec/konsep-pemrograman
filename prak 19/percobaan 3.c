#include <stdio.h>
#include <math.h>
#define baris 13
#define kolom 3
#define PI 3.14159

float radian(float derajat){
    return derajat / 180 * PI;
}
int main() {
    float x[baris];
    float data[baris][kolom];
    int i, j;
    for (i = 0; i < baris; i++) {
        x[i] = 30 * i;
    }
    for (i = 0; i < baris; i++) {
        for (j = 0; j <  kolom; j++) {
            if (j == 0) {
                data[i][j] = sin(radian(x[i]));
            }
            else if (j == 1) {
                data[i][j] = cos(radian(x[i]));
            }
            else if (j == 2) {
                data[i][j] = tan(radian(x[i]));
            }
        }
    }
    printf("sudut   sin      cos      tan\n");
    for (i = 0; i < baris; i++) {
        printf("%3.0f ", x[i]);
        for (j = 0; j < kolom; j++) {
            if (data [i] [j] <= 2) {
                printf("%8.2f ", data [i] [j]);                
            }
            else {
                printf("infinity");
            }
        }
        printf("\n");
    }
    return 0;
}