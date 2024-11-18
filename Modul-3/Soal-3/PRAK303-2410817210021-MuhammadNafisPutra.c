#include <stdio.h>

int main(){
int N;
printf("Masukkan Bilangan :");
scanf("%d", &N);

if (N<0) printf("Negatif");
else if (N==0) printf("Nol");
else printf("Positif");
}
