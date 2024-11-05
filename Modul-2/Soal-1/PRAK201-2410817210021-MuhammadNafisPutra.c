#include <stdio.h>

int main () {
    char nama [100], NIM [100], KP [100], TTL [100], A [100], H [100], NHP [100];

    printf("Nama                      : ");
    scanf ("%[^\n]", &nama);
    getchar();
    printf("NIM                       : ");
    scanf ("%[^\n]", &NIM);
    getchar();
    printf("Kelas Paralel             : ");
    scanf ("%[^\n]", &KP);
    getchar();
    printf("Tempat/Tanggal Lahir      : ");
    scanf ("%[^\n]", &TTL);
    getchar();
    printf("Alamat                    : ");
    scanf ("%[^\n]", &A);
    getchar();
    printf("Hobi                      : ");
    scanf ("%[^\n]", &H);
    getchar();
    printf("No. HP                    : ");
    scanf ("%[^\n]", &NHP);
    getchar();

    printf("\n");
    printf("Nama                     : %s\n", nama);
    printf("NIM                      : %s\n", NIM);
    printf("Kelas Paralel            : %s\n", KP);
    printf("Tempat/Tanggal Lahir     : %s\n", TTL);
    printf("Alamat                   : %s\n", A);
    printf("Hobi                     : %s\n", H);
    printf("No. HP                   : %s\n", NHP);
    
    return 0;
}


