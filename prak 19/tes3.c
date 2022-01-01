#include <stdio.h>
#include <math.h>
#define PHI 3.14f
float radian(float);
void isiX(float[]);
void tampilkan(float[]);
int main(){
    float x[13];
    isiX(x);
    tampilkan(x);
}
void isiX(float sudut[]) {
    int i = 0;
    float derajad=0;
    for(i=0;derajad<=360;i++) {
        sudut[i] = derajad;
        derajad+=30;
    }
}
void tampilkan(float sudut[]) {
    int i;
    printf("----------------------------------------\n");
    printf("| %6s | %7s | %7s | %7s |\n","x","sin(x)","Cos(x)","Tan(x)");
    printf("----------------------------------------\n");
    for(i=0;i<13;i++)
    printf("| %6.0f | %7.2f | %7.2f | %7.2f |\n",sudut[i],sin(radian(sudut[i])),cos(radian(sudut[i])),tan(radian(sudut[i])));
    printf("----------------------------------------\n");
}
float radian(float derajad) {
    return (derajad / 180.0f) * PHI;
}