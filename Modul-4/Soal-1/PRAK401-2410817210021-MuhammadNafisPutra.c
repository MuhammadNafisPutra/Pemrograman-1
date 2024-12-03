#include <stdio.h>

int main (){
    int pengali, baris;
    int total = 0;
    scanf("%d %d", &baris, &pengali);

    for (int i = 1; i <= baris; i++){
        int jumlah = 0;
        printf("(");
        for (int j = i; j >= 1; j--){
            jumlah += j * pengali;
            printf("%d * %d", j, pengali);
            if (j > 1) printf(") + (");
        }
        printf(") = %d \n", jumlah);
        total += jumlah;
    }
    printf("%d \n", total);
    return 0;
}