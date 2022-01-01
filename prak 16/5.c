#include <stdio.h>
int masukan(int n){
    int a, b, total;
    for (a = 1; a<=n ; a++ )
    {
        b = 0;
        printf("Masukkan nilai ke-%d : ", a);
        scanf("%d", &b);
        total += b;
    }
    return total;
}
float average(float n, float total){
    float rata = total / n;
    return rata;
}
int main(){
    int n, jumlah;
    float rata;
    printf("Masukkan jumlah data = ");
    scanf("%d", &n);
    jumlah = masukan(n);
    rata = average(n, jumlah);
    printf("nilai rata-rata : %g\n", rata);
    return 0;
}