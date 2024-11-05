#include <stdio.h>

int main() {
 float PI = 22.0/7.0;
    //test case 1 
float jari_jari1, tinggi1;
    
    printf("Jari-jari dan tinggi :\n");
    scanf("%f", &jari_jari1);
    scanf("%f", &tinggi1);

    float volume = PI * jari_jari1 * jari_jari1 * tinggi1;
    float luas = 2 * PI * jari_jari1 * (jari_jari1 + tinggi1);
    float keliling = 2 * PI * jari_jari1;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    //test case 2
float jari_jari2, tinggi2;

    printf("Jari-jari dan tinggi :\n");
    scanf("%f %f", &jari_jari2, &tinggi1);

    float volume2 = PI * jari_jari2 * jari_jari2 * tinggi2;
    float luas2 = 2 * PI * jari_jari2 * (jari_jari2 + tinggi2);
    float keliling2 = 2 * PI * jari_jari2;

    printf("Volume = %.2f\n", volume2);
    printf("Luas = %.2f\n", luas2);
    printf("Keliling = %.2f\n", keliling2);

    return 0;
}
