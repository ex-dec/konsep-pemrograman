#include <stdio.h>

int main(){
    int MAKS;
    printf("Masukkan jumlah nilai yang akan diinputkan : ");
    scanf("%d", &MAKS);
    int max = -2147483648;
    int array_of_int [MAKS];
    int i;
    for ( i = 0; i < MAKS; i++) {
        printf("Masukkan nilai ke-%d : ", i+1);
        scanf("%d", &array_of_int[i]);
        if (array_of_int[i] > max) {
            max = array_of_int[i];
        }
    }
    printf("array = { ");
    for (i = 0; i < MAKS - 1; i++)
    {
        printf("%d, ", array_of_int[i]);
    }
    printf("%d }\n", array_of_int[i]);
    printf("Nilai paling besar dalam array tersebut adalah %d\n", max);
    return 0;
}