#include <stdio.h>
char *nama_bulan(int n);
int main(){
    int bl;
    printf("Bulan 1..12 : ");
    scanf("%d", &bl);
    printf("Bulan ke-%d adalah %s\n", bl, nama_bulan(bl));
    return 0;
}
char *nama_bulan(int n){
    int i;
    static char *bulan[] = {"Ngawur","Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};
    return ((n<1||n>12) ? bulan[0] : bulan[n]);
}