#include <stdio.h>
#include <string.h>

void balikstr(int jumlah, char str1[], char str2[]){
    int i;
    for (i = 0; i < jumlah; i++, jumlah--) {
        str2[jumlah] = str1[i];
        str2[i] = str1[jumlah];
    }
}

int main() {
    char str1[100];
    char str2[100];
    char str3[100];
    int jumlah;
    printf("input string : ");
    fgets(str1, sizeof str1, stdin);
    jumlah = strlen(str1) - 1;
    printf("Jumlah huruf pada string tersebut adalah : %d\n", jumlah);
    balikstr(jumlah, str1, str2);
    printf("Hasil pembalikan dari string tersebut adalah : %s\n", str2);
    strcpy(str3, str1);
    printf("Ini adalah value dari string pertama : %s\n", str1);
    printf("Hasil copy dari string pertama adalah :%s\n", str3);
    return 0;
}