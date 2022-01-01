#include <stdio.h>
int pjstr(char str[]){
    int i;
    int jumlah = 0;
    for (i = 0; str[i] != '\0'; i++) {
        jumlah++;
    }
    return jumlah-1;
}
void balikstr(int jumlah, char str[]){
    char a;
    int i;
    for (i = 0; i < jumlah; i++, jumlah--) {
        a = str[i];
        str[i] = str[jumlah];
        str[jumlah] = a;
    }
}
int main() {
    char str1[100];
    int jumlah;
    printf("input string : ");
    fgets(str1, sizeof str1, stdin);
    jumlah = pjstr(str1);
    balikstr(jumlah, str1);
    printf("%d", jumlah);
    puts(str1);
    return 0;
}