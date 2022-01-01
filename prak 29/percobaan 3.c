#include <stdio.h>
#define maks 3
#define index 1000
struct tabel {
    char kode, jenis[index];
    int harga;
};

int main(){
    int i, j;
    char lagi;
    char tes;
    int tes2;
    int satuan[index] = {0};
    int jumlah = 0;
    float diskon;
    struct tabel daftar[maks] = {{'D', "Dada", 5000}, {'P', "Paha", 4000},{'S', "Sayap", 3000}};
    struct tabel pesanan[index];
    puts("Toko GFC-Gerobak Fried Chicken\n");
    puts("DAFTAR HARGA");
    puts("Kode\tJenis\tHarga Per Potong");
    for ( i = 0; i < maks ; i++) {
        printf("%c\t%s\tRp. %d.00\n", daftar[i].kode, daftar[i].jenis, daftar[i].harga);
    }
    puts("\nHarga belum termasuk pajak : 10%\n");
    puts("Tekan ENTER untuk melanjutkan");
    getchar();
    puts("Masukkan pesanan anda");
    i = 0;
    do
    {
        j = 0;
        printf("Pesanan ke-%d\n", i+1);
        printf("Jenis [D/P/S]\t: ");
        scanf("%c", &tes);
        printf("Jumlah\t\t: ");
        scanf("%d", &tes2);
        if (tes == 'D' || tes == 'd') {
            j = 0;
        } else if (tes == 'P' || tes == 'p') {
            j = 1;
        } else if (tes == 'S' || tes == 's') {
            j = 2;
        }
        satuan[j] += tes2;
        pesanan[j].harga += tes2 * daftar[j].harga;
        tes2 = 0;
        fflush(stdin);
        printf("\nMau memasukkan data lagi [Y/T] ? ");
        lagi = getchar();
        fflush(stdin);
        i++;
    } while (lagi == 'y' || lagi == 'Y');
    puts("Nota belanja anda:\n");
    puts("\t\t    GEROBAK FRIED CHICKEN\n");
    puts("==============================================================");
    puts("  No\tJenis Potong\tHarga harga\tQty\tJumlah Harga");
    puts("==============================================================");
    for ( i = 0; i < maks; i++) {
        printf("  %02d\t%s\t\tRp  %d.00\t%d\tRp%7d.00\n", i+1, daftar[i].jenis, daftar[i].harga, satuan[i], pesanan[i].harga);
        jumlah += pesanan[i].harga;
    }
    diskon = jumlah * 10 / 100;
    puts("==============================================================");
    printf("\t\t\t\tJumlah bayar\tRp%7d.00\n", jumlah);
    printf("\t\t\t\tPajak 10%%\tRp%7g.00\n", diskon);
    printf("\t\t\t\tTOTAL BAYAR\tRp%7g.00\n", diskon+jumlah);
    puts("\n\t    TERIMA KASIH ATAS KUNJUNGAN ANDA");
    puts("\ntekan enter untuk melanjutkan");
    getchar();
    return 0;
}
