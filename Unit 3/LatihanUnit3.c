/*
- masukan: baris 1= int jumlah eleman, baris 2= nilai setiap nilai yg dimasukan
- luaran: hasi penjumlahan seluruh elemen
*/

#include <stdio.h>

//kamus
int jml_elemen;
int i;
int total = 0;

//main
int main() {
    printf("masukan elemen max: ");
    scanf("%d", &jml_elemen);
    int array[jml_elemen];
    for (i = 0; i < jml_elemen; i++) {
        printf("masukan elemen ke-%d: ",i);
        scanf("%d", &array[i]);
    } for (i=0; i<jml_elemen;i++)
    {
        total += array[i];
    }

    printf("totalnya: %d", total);

    return 0;
}
