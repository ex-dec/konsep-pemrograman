#include <stdio.h>
#define index 1000
int hitung(char input[], char tanda);

int main(){
    int a;
    char input[index];
    char tanda;
    int jumlah = 0;
    printf("Masukkan kalimat : ");
    fgets(input, sizeof input, stdin);
    printf("Masukkan huruf yang dihitung : ");
    scanf("%c", &tanda);
    jumlah = hitung(input, tanda);
    printf("Jumlah huruf yang dihitung : %d\n", jumlah);
    return 0;
}

int hitung(char input[], char tanda){
    int i;
    int jumlah = 0;
    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] == tanda || input[i]-32 == tanda || input[i]+32 == tanda) {
            jumlah++;
        }
    }
    return jumlah;
}