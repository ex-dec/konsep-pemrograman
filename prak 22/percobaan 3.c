#include <stdio.h>
#define index 100
int bandingstr2(char str1[], char str2[]){
    int i;
    int banding = 0;
    for (i = 0; str1[i] != '\0'; i++){
        if (str1[i] != str2[i]) {
            if (str1[i] > str2[i]) {
                banding = 1;
                break;
            } else {
                banding = -1;
                break;
            }
        }
    }
    return banding;
}
int main(){
    char str1[index];
    char str2[index];
    int banding = 0;
    printf("masukkan string 1 : ");
    fgets(str1, sizeof str1, stdin);
    printf("masukkan string 2 : ");
    fgets(str2, sizeof str2, stdin);
    banding = bandingstr2(str1,str2);
    printf("hasil perbandingan : %d\n", banding);
    return 0;
}