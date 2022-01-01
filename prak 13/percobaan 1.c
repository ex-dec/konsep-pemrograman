#include <stdio.h>
void menu();
int main(){
    int n, i;
    printf("masukkan nilai n : ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        menu();
    }
    return 0;
}
void menu(){
    printf("Pilihan menu\n");
}