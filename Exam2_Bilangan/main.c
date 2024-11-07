#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan sebuah angka:");
    scanf("%d",&bilangan);

    if (bilangan % 2 != 0 && bilangan > 0) {
        printf("Angka yang dimasukkan adalah bilangan positif ganjil", bilangan);
    } else if (bilangan % 2 == 0 && bilangan > 0)  {
        printf("Angka yang dimasukkan adalah bilangan positif genap", bilangan);
    } else if (bilangan % 2 != 0 && bilangan < 0) {
        printf("Angka yang dimasukkan adalah bilangan negatif ganjil", bilangan);
    } else if (bilangan % 2 == 0 && bilangan < 0)  {
        printf("Angka yang dimasukkan adalah bilangan negatif genap", bilangan);
    } else {
        printf("Angka yang dimasukkan adalah nol");
    }

    return 0;
}