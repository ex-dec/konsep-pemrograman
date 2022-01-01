#include <stdio.h>

void bilangan_fibonacci(int angka){
    int a,b=0,c=1,out;
    for(a=0;a<angka;a++) {
        if(a<=1) {
            out = a;
            printf("%d ",out);
        } else {
            out = b+c;
            b = c;
            c = out;
            printf("%d ",out);
        }
    }
}
// program
int main(){
    int angka;
    printf("Masukkan jumlah barisan fibonacci : "); 
    scanf("%d" ,&angka);
    bilangan_fibonacci(angka);
    puts(" ");
    return 0;
}