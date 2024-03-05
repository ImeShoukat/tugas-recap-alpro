#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}
/*
- menggunakan #define untuk mendefinisikan konstanta "max_person" (menentukan jumlah maksimun orang yang akan disimpan yaitu 3) dan konstanta "max_name_length" (menentukan panjang maksimum nilai seseorang yaitu 20)
- menginisialisasi dua array yaitu 'names' untuk menyimpan nama orang orang dengan panjang 3 dan panjang char 20  serta 'ages' untuk menyimpan usia usia orang tersebut dengan panjang 3. setiap baris array 'names' berisi string nama dan setiap elemen array 'ages' berisi usia
- program mencetak header untuk tabel yang akan ditampilkan, mecetak judul "nama" dan "age" serta diikuti dengan garis pemisah.
- looping menggunakan for sebanyak 3 kali untuk mengiterasi melalui setiap orang yang disimpang dalam array 'names' dan 'ages'. 
*/