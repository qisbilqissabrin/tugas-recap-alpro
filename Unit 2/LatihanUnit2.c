#include <stdio.h>

int main (){
    int jumlah_transaksi, nominal_transaksi, total_pengeluaran = 0;

    printf ("Masukkan jumlah transaksi:");
    scanf("%d",&jumlah_transaksi);

    if (jumlah_transaksi <= 0){
        printf ("Tidak ada transaksi hari ini\n");
    }

    printf ("Masukkan nominal transaksi:\n");

for (int i=0;i<jumlah_transaksi;i++){
    scanf ("%d",&nominal_transaksi);
    total_pengeluaran +=nominal_transaksi;
}

printf("Total pengeluaran hari ini : %d\n",total_pengeluaran);

return 0;
}