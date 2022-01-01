#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str1[99];
    char str2[99];
    puts("=========> Nomor 4 <========");
    printf("Masukan kata 1 = ");
    gets(str1);
    printf("Masukan kata 2 = ");
    gets(str2);
    printf("strcmp  = %d \n",strcmp(str1,str2));
    printf("strcmpi  = %d \n",strcmpi(str1,str2));
    return 0;
}