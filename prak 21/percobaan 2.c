#include <stdio.h>
int pjstr(char str[]){
    int i;
    int jumlah = 0;
    for (i = 0; str[i] != '\0'; i++) {
        jumlah++;
    }
    return jumlah-1;
}
int main() {
    char str1[100];
    int jumlah;
    printf("input string : ");
    fgets(str1, sizeof str1, stdin);
    jumlah = pjstr(str1);
    printf("%d\n", jumlah);
    return 0;
}