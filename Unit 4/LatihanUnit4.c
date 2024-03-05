//program keliling persegi, luas persegi, volume kubus

#include <stdio.h>

int sisi;
int K_persegi(int sisi){
    return 4*sisi;
}
int L_persegi(int sisi){
    return sisi*sisi;
}
int V_kubus(int sisi){
    return sisi*sisi*sisi;
}

int main(){
    printf("panjang sisinya berapa nih: ");
    scanf("%d", &sisi);

    //itung keliling
    printf("keliling perseginya: %d \n",K_persegi(sisi));
    printf("luas perseginya: %d \n",L_persegi(sisi));
    printf("volume perseginya: %d \n",V_kubus(sisi));
    
}
