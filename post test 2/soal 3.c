#include <stdio.h>

int main(){
    float nilai [5] [4] = { 8.4, 8.4, 9.4, 6.4, 7.6, 6.6, 7.6, 8.6, 5.4, 8.4, 5.4, 8.4, 4.6, 6.6, 8.6, 7.6, 7.6, 6.6, 6.6, 7.6};
    int i, j;
    float simpan;
    printf("Nama\tFisika\tMtmtika\tKimia\tBiologi\tRata2mhs\n");
    for (i = 0; i < 5; i++) {
        simpan = 0;
        switch (i) {
        case 0:
            printf("Andi    ");
            break;
        case 1:
            printf("Hasan   ");
            break;
        case 2:
            printf("Dubi    ");
            break;
        case 3:
            printf("Adib    ");
            break;
        case 4:
            printf("Rahma   ");
            break;
        default:
            break;
        }
        for (j = 0; j < 4; j++) {
            printf("%g\t", nilai[i][j]);
            simpan += nilai [i][j];
        }
        simpan /= 4;
        printf("%g \n", simpan);
    }
    printf("Rata2MK\t");
    for (i = 0; i < 4; i++) {
        simpan = 0;
        for (j = 0; j < 5; j++) {
            simpan += nilai[j][i];
        }
        simpan /= 5;
        printf("%g\t", simpan);
    }
    printf("Press any key to continue");
    getchar();
    return 0;
}