#include <stdio.h>

int main(){
    int nilai;
    char Huruf;

    printf("Masukkan Nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 80) {
        Huruf = 'A';
    } else if (nilai >= 70) {
        Huruf = 'B';
    } else if (nilai >= 60) {
        Huruf = 'C';
    } else if (nilai >= 50) {
        Huruf = 'D';
    } else {
        Huruf ='E';
    }
    printf("%d : %c\n", nilai, Huruf);

    return 0;
    }
