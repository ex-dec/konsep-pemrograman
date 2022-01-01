#include <stdio.h>
#define index 100
int main(){
    char str1[index];
    char str2[index];
    char str3[index];
    printf("1. scanf : ");
    scanf("%s", str1);
    printf("scan %s\n", str1);
    printf("2. gets : ");
    gets(str2);
    printf("gets %s\n", str2);
    printf("3. fgets : ");
    fgets(str3,sizeof str3, stdin);
    printf("fgets %s\n", str3);
    printf("\n");
    return 0;
}