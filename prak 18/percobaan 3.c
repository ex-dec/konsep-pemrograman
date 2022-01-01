#include <stdio.h>
#define MAKSROW 2
#define MAKSCOL 3
int a [MAKSROW] [MAKSCOL];
int b [MAKSROW] [MAKSCOL];
int c [MAKSROW] [MAKSCOL];
char mrx;
int i, j;

void tambah(int mtrx[MAKSROW] [MAKSCOL]){
    for (i = 0; i < MAKSROW; i++) {
        for (j = 0; j < MAKSCOL; j++) {
            printf("matriks %c[%d, %d] = ", mrx,i,j);
            scanf("%d",&mtrx[i][j]);
            c[i][j]= c[i][j] + mtrx [i][j];
        }
    }
    printf("\n");
}

void cetak(int mtrx[MAKSROW][MAKSCOL]){
    for (i = 0; i < MAKSROW; i++) {
        for (j = 0; j < MAKSCOL; j++) {
            printf(" %d ",mtrx[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    printf("penjumlahan matrix ordo %d x %d\n\n", MAKSROW, MAKSCOL);
    mrx = 'a';
    tambah(a);
    mrx = 'b';
    tambah(b); 
    mrx = 'a';
    printf("matrix a\n");
    cetak(a);
    mrx = 'b';
    printf("matrix b\n");
    cetak(b);
    mrx = 'c';
    printf("matrix c\n");
    cetak(c);
    return 0;
}