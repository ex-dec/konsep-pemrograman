#include <stdio.h>
#define maxcol 10
#define maxrow 10
int mA[maxrow][maxcol];
int mB[maxrow][maxcol];
int mC[maxrow][maxcol];

void inputmatriksA(int row, int col) {
    int i, j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("matriks A[%d, %d] = ",i,j);
            scanf("%d",&mA[i][j]);
        }
    }
}

void inputmatriksB(int row, int col) {
    int i, j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("matriks B[%d, %d] = ",i,j);
            scanf("%d",&mB[i][j]);
        }
    }
}

void cetakmatriks (int a[maxrow][maxcol], int row, int col) {
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int nrow, ncol;
    int i,j;
    nrow = 2;
    ncol = 2;
    printf("\n\t*************************************************\n");
    printf("\t\tHASIL TAMBAH 2 MATRIKS ORDO [2x2]");
    printf("\n\t*************************************************\n");
    printf("\nMasukkan Matriks A : \n");
    inputmatriksA(nrow,ncol);
    printf("\nMasukkan Matriks B: \n");
    inputmatriksB(nrow,ncol);
    printf("\nCetak Matriks A: \n");
    cetakmatriks(mA,nrow,ncol);
    printf("\nCetak Matriks B: \n");
    cetakmatriks(mB,nrow,ncol);
    printf("\nPenjumlahan Matriks A + B: \n");
    for(i=0;i<nrow;i++){
        for(j=0;j<ncol;j++){
            mC[i][j] = mA[i][j] + mB[i][j];
            printf(" %d ",mC[i][j]);
        }
        printf("\n");
    }
}