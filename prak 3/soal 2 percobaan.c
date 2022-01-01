#include <stdio.h>
int main(){
int uang, ratus, lima_puluh, dua_puluh, sepuluh, lima, dua, satu;
        printf("Masukkan nominal uang : Rp ");
        scanf("%d", &uang);
        printf("%d lembar uang Seratus Ribuan\n", ratus = uang / 100000);
        uang = uang - ratus*100000;
        printf("%d lembar uang Lima Puluh Ribuan \n", lima_puluh = uang / 50000);
        uang = uang - lima_puluh * 50000;
        printf("%d lembar uang Dua Puluh Ribuan \n", dua_puluh = uang / 20000);
        uang = uang - dua_puluh * 20000;
        printf("%d lembar uang Sepuluh Ribuan \n", sepuluh = uang / 10000);
        uang = uang - sepuluh * 10000;
        printf("%d lembar uang Lima Ribuan \n", lima = uang / 5000);
        uang = uang - lima * 5000;
        printf("%d lembar uang Dua Ribuan \n", dua = uang / 2000);
        uang = uang - dua * 2000;
        printf("%d lembar uang Seribuan \n", satu = uang / 1000);
        return 0;
}