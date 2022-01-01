#include <stdio.h>
#define baris 4
#define kolom 3
int main(){
    int nilai [baris] [kolom] = {81, 90, 62, 50, 83, 87, 89, 55, 65, 77, 70, 92};
    int i;
    int j;
    float simpan;
    printf("No. Mhs\t Rata-rata\n");
    printf("------------------\n");
    for (i = 0; i < baris; i++) {
        simpan = 0;
        printf("%d\t ", i+1);
        for (j = 0; j < kolom; j++) {
            simpan += nilai [i][j];
        }
        simpan /= kolom;
        printf("%g \n", simpan);
    }
    printf("------------------\n");
    return 0;
}
