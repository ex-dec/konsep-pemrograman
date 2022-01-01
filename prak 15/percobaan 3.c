#include <stdio.h>
void ubah(int *x);

int main(){
    int a, b;
    printf("masukkan bil 1 : ");
    scanf("%d", &a);
    printf("masukkan bil 2 : ");
    scanf("%d", &b);
    ubah(&a);
    ubah(&b);
    printf("hasil perubahan bilangan 1 adalah %d\n", a);
    printf("hasil perubahan bilangan 2 adalah %d\n", b);
}
void ubah(int *x){
    *x += 2;
}