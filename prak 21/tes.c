#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("=================================================================\n");
    printf("\t\tAplikasi Penginput String\n");
    printf("=================================================================\n\n");
    char string1[20], string2[20], string3[20];
    printf("1. Scanf\n");
    printf("Masukkan Kalimat : ");
    scanf("%s", string1);
    fflush(stdin);
    printf("%s", string1);
    printf("\n\n");
    printf("2. Gets\n");
    printf("Masukkan Kalimat : ");
    gets(string2);
    printf("%s", string2);
    printf("\n\n");
    printf("3. Fgets\n");
    printf("Masukkan Kalimat : ");
    fgets(string3, sizeof string3, stdin);
    printf("%s", string3);
    printf("\n\n=================================================================\n\n");
    system("PAUSE");
}