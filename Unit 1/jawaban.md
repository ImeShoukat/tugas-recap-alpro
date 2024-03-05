jawaban unit 1
- percobaan 2
    * percobaan2a.c
        dalam percobaain ini dalam program tidak ada 
        #include <stdio.h> 
        sebagai kamus dalam bahasa C dan untuk memungkinkan kode menerima input atau mengeluarkan output.

    * percobaan2b.c
        dalam percobaan ini error karena pada printf tidak ada tanda petik ("..." maupun ('...')) sehingga tidak dianggap. 
        seharusnya:
         printf("Alpro itu mudah!");
    * percobaan2c.c
        dalam percobaan tersebut, program yang akan dieksekusi error karena statemen tidak berada di dalam fungsi main()
        seharusnya:
        #include <stdio.h>
        int main() {
            printf("Alpro itu mudah!"); 
            return 0;
        }

- percobaan 3
    *Keluaran program adalah:
        1. percobaan3a.c
            Barisan PertamaBarisan Kedua
            Barisan Ketiga
        2. percobaan3b.c
            Oh my, oh my God
            예상했어 나 
            I was really hoping that he will come through
    * fungsi dari /n adalah untuk membuat baris baru dalam sebuah string.

- percobaan 5
    * perbedaan output dari program percobaan5a.c dan percobaan5b.c
        1. percobaan5a.c
            Masukan nama lengkap kamu:
            imedia sholem
            Halo imedia
        2. percobaan5b.c
            Masukan nama lengkap kamu:
            imedia sholem
            Halo imedia sholem

    ya ada perbedaan output dari kedua program tersebut. pada percobaan5a.c menggunakan scanf dimana hanya akan menggambil kata pertama yang diinput sehingga pada output hanya muncul kata pertama. sedangkan pada percobaan5b.c menggunakan fgets dimana semua kata yang diinput akan diambil sehingga di output semua kata akan muncul.

- pecobaan 8
    dipercobaan 8, titik kemudian diikuti angka yang ada di dalam string menentukan jumlah digit angka desimal pada phi yang akan dicetak di output. sebagain contoh: printf("%.1f\n", phi); maka yang akan keluar nanti 1 digit desimal saja (3.1).