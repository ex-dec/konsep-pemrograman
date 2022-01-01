#include <stdio.h>
#include <math.h>

float radian(float a){
    float PI = 3.14159;
    float rad;
    rad = a * PI / 180;
    return rad;
}

int main(){
    float bac, ab, rad, bc;
    printf("Masukkan besar sudut BAC : ");
    scanf("%f", &bac);
    printf("Masukkan panjang sisi AB (satuan meter) : ");
    scanf("%f", &ab);
    rad = radian(bac);
    bc = tan(rad) * ab; 
    printf("panjang sisi BC adalah %g m\n", bc);
    return 0;
}