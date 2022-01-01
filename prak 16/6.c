#include <stdio.h>
float ukuran;
void f_to_i(){
    ukuran = ukuran * 12;
}
void i_to_cm(){
    ukuran = ukuran * 2.54;
}
void cm_to_m(){
    ukuran = ukuran / 100;
}
int main(){
    printf("Masukkan ukuran dalam satuan feet/kaki : ");
    scanf("%f", &ukuran);
    f_to_i();
    i_to_cm();
    cm_to_m();
    printf("Ukuran dalam satuan meter : %g m\n", ukuran);
}