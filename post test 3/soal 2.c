#include <stdio.h>
#define index 100
int main(){
    int a[index];
    int *pa;
    pa = a;
    int i;
    int n;
    for (i = 0; i < index; i++) {
        if (i == 0) {
            a[i] = 1;
        } else if (i == 1) {
            a[i] = 1;
        } else {
            a[i] = 6 * a[i-1] + 9 * a[i-2];
        }
    }
    printf("masukkan bilangan yang ingin ditampilkan : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d ", *pa++);
    }
    printf("\n");
    return 0;
}