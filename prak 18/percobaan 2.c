#include <stdio.h>

int main(){
    int batas, i, array[100000];
    printf("masukkan batas : ");
    scanf("%d", &batas);
    array[0] = 0;
    array[1] = 1;
    i = 2;
    while (i < 100000) {
        array[i] = array[i-1] + array[i-2];
        i++;
    }
    for (i = 0; array[i] <= batas; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}