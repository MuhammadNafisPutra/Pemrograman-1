#include <stdio.h>

int main(){
    int pilihan;
    float a, b;

    while(1){
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan :");
        scanf("%d", &pilihan);

        if (pilihan == 5){
        printf("Terimakasih, telah menggunakan kalkulator Muhammad Nafis Putra\n");break;}
        if(pilihan > 5 || pilihan < 1){
        printf("Input anda salah, silahkan coba lagi\n");continue;}
    
    printf("masukkan Nilai Pertama :");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua :");
    scanf("%f", &b);

    switch(pilihan){
        case 1:
        printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, a + b);break;
        case 2:
        printf("Hasil Pengurangan antara %.2f dengan %2.2f adalah %.2f\n", a, b, a - b);break;
        case 3:
        printf("Hasil Perkalian antara %.2f dengan %2.2f adalah %.2f\n", a, b, a * b);break;
        case 4:
        printf("Hasil Pengurangan antara %.2f dengan %2.2f adalah %.2f\n", a, b, a / b);break;
    }
    }
}