#include <stdio.h>

int main(){
    int akademik, keterampilan, psikologi;
    printf("program rekruitmen perusahaan\n");
    printf("masukkan nilai akademik : ");
    scanf("%d", &akademik);
    printf("masukkan nilai keterampilan : ");
    scanf("%d", &keterampilan);
    printf("masukkan nilai psikologi : ");
    scanf("%d", &psikologi);
    if ((akademik + keterampilan + psikologi) / 3 >= 75)
    {
        if (akademik > keterampilan && akademik > psikologi )
        {
            printf("diterima di bagian administrasi\n");
        }
        else if (keterampilan > akademik && keterampilan > psikologi)
        {
            printf("diterima di bagian Produksi\n");
        }
        else
        {
            printf("diterima di bagian pemasaran\n");
        }
    }    
    else
    {
        printf("anda tidak diterima di perusahaan ini\n");
    }
    return 0;
}