#include <stdio.h>
float kuadrat(float);

int main(){
    float x;
    printf("masukkan nilai x : ");
    scanf("%f", &x);
    printf("nilai kuadrat dari x adalah %g\n", kuadrat(x));
    return 0;
}

float kuadrat(float x){
    x = x * x;
    return(x);
}