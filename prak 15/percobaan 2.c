#include <stdio.h>
float permutasi(int, int);
float kombinasi(int, float);
int faktorial(int);

int main(){
    int n, r; 
    float mutasi, kombin;
    printf("masukkan nilai n = ");
    scanf("%d", &n);
    printf("masukkan nilai r = ");
    scanf("%d", &r);
    mutasi = permutasi(n,r);
    kombin = kombinasi(r, mutasi);
    printf("hasil permutasi = %g\n", mutasi);
    printf("hasil kombinasi = %g\n", kombin);
    return 0;
}

int faktorial(int n){
    int total;
    total = 1;
    for (;n > 0;n--)
    {
        total = total * n;
    }
    return total;
}

float permutasi(int n, int r){
    float hasil;
    hasil = faktorial(n)/faktorial(n - r);
    return hasil;
}

float kombinasi(int r, float mutasi){
    float hasil;
    hasil = mutasi / faktorial(r);
    return hasil;
}