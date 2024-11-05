#include <stdio.h>
#include <math.h>

int main() {
//case ke 1
    float A1, B1, C1, alas1, tinggi1, keliling1, luas1;

    printf("A dan B: \n");
    scanf("%f", &A1);
    scanf("%f", &B1);

    tinggi1 = A1;
    C1 = B1;
    alas1 = sqrt(pow(B1, 2) - pow(A1, 2));
    keliling1 = alas1 + tinggi1 + C1;
    luas1 = 0.5 * alas1 * tinggi1;

    printf("Alas = %.0f cm\n", alas1);
    printf("Tinggi = %.0f cm\n", tinggi1);
    printf("Keliling = %.0f cm\n", keliling1);
    printf("Luas = %.0f cm^2\n", luas1);

    printf("\n");
// case ke 2
    float A2, B2, C2, alas2, tinggi2, keliling2, luas2;

    printf("A dan B: \n");
    scanf("%f", &A2);
    scanf("%f", &B2);

    tinggi2 = A2;
    C2 = B2;
    alas2 = sqrt(pow(B2, 2) - pow(A2, 2));
    keliling2 = alas2 + tinggi2 + C2;
    luas2 = 0.5 * alas2 * tinggi2;

    printf("Alas = %.0f cm\n", alas2);
    printf("Tinggi = %.0f cm\n", tinggi2);
    printf("Keliling = %.0f cm\n", keliling2);
    printf("Luas = %.0f cm^2\n", luas2);

    return 0;
}
