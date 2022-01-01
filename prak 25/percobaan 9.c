#include <stdio.h>
int cari(char array[]){
    char *i = array;
    char a;
    int value = 0;
    printf("Masukkan huruf yang akan dicari : ");
    scanf("%c", &a);
    for (; *i != '\0'; i++) {
        if (*i == a) {
            value = 1;
            break;
        } else if (*i - 32 == a) {
            value = 1;
            break;
        } else if (*i + 32 == a) {
            value = 1;
            break;
        }
    }
    return value;
}
int main(){
    char array[] = "CARILAH!!!";
    int hasil = cari(array);
    if (hasil == 1) {
        puts("Huruf yang anda cari ada");
    } else {
        puts("Huruf yang anda cari tidak ada");
    } 
    return 0;
}