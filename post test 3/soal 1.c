#include <stdio.h>
#include <string.h>
#define index 100
int main(){
    char str1[index], str2[index];
    int i, jumlah;
    printf("String masukan \t : ");
    fgets(str1,sizeof str1,stdin);
    jumlah = strlen(str1);
    for (i = 0; str1 != '\0'; i++) {
        if (str1[i] == str1[0]) {
            str2[i] = str1[jumlah];
        } else {
            str2[i]=str1[i];
        }
    }
    printf("String Output \t : %s\n", str2);
    return 0;
}