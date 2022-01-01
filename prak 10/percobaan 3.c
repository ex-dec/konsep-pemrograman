#include <stdio.h>

int main(){
    float a, d = 0, rata;
    a = 0;
    char b = 'y';
    int c = 0, maksimum = -2147483647, minimum = 2147483647;
    do
    {
        c++;
        printf("masukkan bilangan ke-%d : ", c);
        scanf("%f", &a);
        d = d + a;
        printf("mau memasukkan data lagi? ");
        getchar();
        b = getchar();
        if (a >= maksimum)
        {
            maksimum = a;
        }
        if (a <= minimum)
        {
            minimum = a;
        }
    } while (b == 'Y' || b == 'y');
    printf("Total bilangan = %g\n", d);
    rata = a / c;
    printf("rata-rata dari nilai diatas adalah : %g\n", rata);
    printf("maksimum dari nilai diatas adalah : %d\n", maksimum);
    printf("minimum dari nilai diatas adalah : %d\n", minimum);
}
