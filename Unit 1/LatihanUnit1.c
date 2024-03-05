#include <stdio.h>

float hitungKecepatan (int jarak, int waktu){
    return(float)jarak/waktu;
}
float hitungJarak (int kecepatan, int waktu){
    return (float)kecepatan*waktu;
}
float hitungWaktu(int jarak, int kecepatan){
    return (float) jarak/kecepatan;
}

int main(){
    int jarak1, waktu1, kecepatan1;
    int jarak2, waktu2, kecepatan2;
    int jarak3, waktu3, kecepatan3;

printf ("Masukkan jarak dan waktu(dalam meter dan detik):");
scanf ("%d%d", &jarak1,&waktu1);

printf("%.2f\n", hitungKecepatan(jarak1,waktu1));

printf ("Masukkan kecepatan dan waktu (dalam m/s dan detik):");
scanf ("%d%d", &kecepatan2 ,&waktu2);

printf ("%.2f\n", hitungJarak (kecepatan2, waktu2));

printf ("Masukkan jarak dan kecepatan (dalam meter dan m/s):");
scanf ("%d%d", &jarak3,&kecepatan3);

printf ("%.2f\n", hitungWaktu (jarak3,kecepatan3));

return 0;
}