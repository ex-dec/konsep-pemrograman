#include <stdio.h>
#include <string.h>
#define index 100
int main(){
    char str1[index];
    char str2[index];
    int hasil = 0;
    printf("masukkan string 1 : ");
    fgets(str1, sizeof str1, stdin);
    printf("masukkan string 2 : ");
    fgets(str2, sizeof str2, stdin);
    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", strcmpi(str1, str2));
    return 0;
}