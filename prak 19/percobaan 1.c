#include <stdio.h>
#define index 1000
int n;
void input(int nilai[]) {
    int i;
    printf("masukkan jumlah yang akan dimasukkan : ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++) {
        printf("index ke-%d : ", i);
        scanf("%d", &nilai[i-1]);
    }
}
int findmax(int nilai[]){
    int i;
    int max = -2147483648;
    for (i = 0; i < n; i++) {
        if (max < nilai[i]) {
            max = nilai[i];
        }
    }
    return max;
}
int main(){
    int nilai[index];
    int max = 0;
    input(nilai);
    max = findmax(nilai);
    printf("nilai terbesar dalam array tersebut adalah : %d\n", max);
    return 0;
}