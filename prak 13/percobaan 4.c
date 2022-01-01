#include <stdio.h>
int cn(int);
int sn(int);

int main(){
    int n, s;
    printf("masukkan nilai n : ");
    scanf("%d", &n);
    s = n;
    printf("Hasil fungsi Cn = Cn-1 + 2 dari n = %d adalah %d\n", n, cn(n));
    printf("Hasil fungsi Sn = Sn-1 + n - 1 dari n = %d adalah %d\n", s, sn(s));
    printf("press any key to continue\n");
    getchar();
    getchar();
    return 0;
}

int cn(int n){
    int jumlah, a;
    jumlah = 1;
    for (a = 0;a < n;a++)
    {
        jumlah = 2 * jumlah + 1;
    }
    return(jumlah);
}

int sn(int s){
    int jumlah, a,b;
    jumlah = 0;
    b = 2;
    for (a = 1;a < s;a++)
    {
        jumlah = jumlah + b - 1;
        b++;
    }
    return(jumlah);
}