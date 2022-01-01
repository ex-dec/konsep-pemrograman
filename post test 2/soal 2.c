#include <stdio.h>
void loop(int n){
    int i;
    int a=1;
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        if (i%3 == 0) {
            a += 1;
        } else if (i%3 == 1) {
            a += 2;
        } else {
            a += 3;
        }
    }
    printf("\n");
}
int main(){
    int n;
    printf("Nama : Krisna Wahyu Setyawan\n");
    printf("NRP  : 3120600002\n");
    printf("masukkan batas : ");
    scanf("%d", &n);
    loop(n);
    return 0;
}