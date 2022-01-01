#include <stdio.h>
#define index 100
char copystr(char str1[], char str2[]){
    int i;
    for (i = 0; i < index; i++) {
        str2[i] = str1[i];
    }
}
int main(){
    char str1[index], str2[index];
    printf("input str1 : ");
    scanf("%s", str1);
    copystr(str1, str2);
    printf("ini str 1 : %s\n", str1);
    printf("ini str 2 : %s\n", str2);
    return 0;
}