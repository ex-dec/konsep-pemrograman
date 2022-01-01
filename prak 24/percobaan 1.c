#include <stdio.h>

int main(){
    int y, x = 87;
    int *px;
    px = &x;
    y = *px;
    printf("Alamat x dengan && = %p\n", &x);
    printf("alamat y = %p\n", &y);
    printf("alamat px = %p\n", &px);
    printf("Isi px = %p\n", px);
    printf("Isi x = %d\n", x);
    printf("Nilai yang ditunjuk oleh px = %d\n", *px);
    printf("Nilai y = %d\n", y);
    return 0;
}
