#include <stdio.h>
void triangular();
int main(){
    int n;
    printf("masukkan nilai n : ");
    scanf("%d", &n);
    triangular(n);
}
void triangular(int n){
    int a, jumlah;
    jumlah = 0;
    for (a = 1; n >= a ; n--)
    {
        if (n == 1)
        {
            printf("%d = ", n);
        }
        else
        {
            printf("%d + ", n);
        }
        jumlah = jumlah + n;
    }
    printf("%d\n", jumlah);
}