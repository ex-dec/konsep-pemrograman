#include <stdio.h>
#define index 1000
int main(){
    int a[index];
    int *pa = a;
    int i;
    int n;
    printf("masukkan n : ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        if (i == 0) {
            *pa = 0;
            printf("%d ", *pa++);
        } else {
            *pa = *(pa-1) + i + 1;
            printf("%d ", *pa++);
        }
    }
    printf("\n");
    return 0;
}