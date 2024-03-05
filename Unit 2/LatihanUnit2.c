/*
- masukan: baris 1= int jumlah transaksi, baris 2 dan selanjutnya = nomnila transaksi
- format luaran: total pengeluaran hari ini
*note: ada pengecekan terlebih dahulu, jika <=0 output = "tidak ada trasnsaksi hari ini/*/

#include <stdio.h>

//kamus
int jml_transaksi;
int nominal_transaksi;
int total_pengeluaran;

int main(){
    printf("Jumlah transaksi hari ini: ") ;
    scanf("%d", &jml_transaksi);

    if(jml_transaksi <= 0)
    {
        printf("Tidak ada transaksi hari ini /n");
    }else{
        for (int i=1; i<=jml_transaksi;i++){
            printf("masukan nominal transaksi ke-%d: ", i);
            scanf("%d", &nominal_transaksi);
            total_pengeluaran += nominal_transaksi;
        }
    }
    printf("total pengeluaran hari ini adalah: %d", total_pengeluaran);

    return 0; 
}