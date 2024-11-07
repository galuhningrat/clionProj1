#include <stdio.h>

int main() {
    int qualityValue;
    char category1 = 'A';
    char category2 = 'B';
    char category3 = 'C';
    char category4 = 'D';
    char category5 = 'E';


    // masukkan nilai kualitas produk
    printf("Masukkan nilai kualitas \n");
    scanf("%d, %c", &qualityValue, category1, category2, category3, category4, category5);

    if (qualityValue && qualityValue > 80) {
        printf("Kategori penialain produk: ", category1);
    } else if (qualityValue && qualityValue > 70 <= 80 ) {
        printf("Kategori penilaian produk: ", category2);
    } else if (qualityValue && qualityValue > 60 <= 70) {
        printf("Kategori penilaian produk: ", category3);
    } else if (qualityValue && qualityValue > 50 <= 60) {
        printf("Kategori penilaian produk: ", category4);
    }else if (qualityValue < 50) {
        printf("Kategori penilaian produk: ", category5);
    }
    return 0;
}
