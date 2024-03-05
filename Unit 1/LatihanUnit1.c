/*buat int jarak sama waktu, buat int kecepatan sama waktu, buat int jarak sama kecepatan

nanti keluaran 1. hasil perhitungan kecepatan(float), 2. hasil jarak (float), 3. hasil waktu (float)
nanti di konversi dulu masukannya jadi float*/

#include <stdio.h>

//kamus
int s1, t1;
int v1, t2;
int s2, v2;

int main (){
scanf("%d %d", &s1, &t1);
scanf("%d %d", &v1, &t2);
scanf("%d %d", &s2, &v2);

float V = (float) s1/t1;
float S = (float) v1*t2;
float T = (float) s2/v2;

printf("Hasil perhitungan kecepatan (V): %3f/n", V);
printf("Hasil perhitungan jarak (S): %3f/n", S);
printf("Hasil perhitungan waktu (T): %3f/n", T);
}