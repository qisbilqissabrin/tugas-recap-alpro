# include <stdio.h>

int main (){
    int jumlah_elemen, nilai_elemen [100], i;
    int hasil_penjumlahan = 0;
    
scanf ("%d", &jumlah_elemen);

for (int i=0; i<jumlah_elemen; i++){
   scanf ("%d", &nilai_elemen[i]);
}

for  (int i=0;i<jumlah_elemen;i++){
hasil_penjumlahan += nilai_elemen[i];
}

printf("%d\n", hasil_penjumlahan);
return 0;
}

