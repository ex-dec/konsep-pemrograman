#include <stdio.h>

void rotasi(int *a, int *b, int *c){
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}
int main(){
    int a, b, c;
    printf("masukkan nilai a : ");
    scanf("%d", &a);
    printf("masukkan nilai b : ");
    scanf("%d", &b);    
    printf("masukkan nilai c : ");
    scanf("%d", &c);
    rotasi(&a, &b, &c);
    puts("Rotasi dimulai....");
    printf("nilai a : %d\n", a);
    printf("nilai b : %d\n", b);
    printf("nilai c : %d\n", c);
    return 0;
}