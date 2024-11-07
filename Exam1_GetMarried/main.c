#include <stdio.h>

int main() {
    int urAge;
    char genderValue;
    char confirmurmarriedValue;

    printf(" Masukkan usia Anda: ");
    scanf ("%d", &urAge);

    printf("Masukkan jenis kelamin (L/P): ");
    scanf (" %c", &genderValue);

    printf("Apakah Anda sudah menikah (Y/T) ");
    scanf (" %c", &confirmurmarriedValue);

    enum gender { laki, perempuan };
    enum gender jenis_kelamin;

    enum married { belum, sudah };
    enum married status_menikah;

    if (genderValue == 'L' || genderValue == 'l') {
        jenis_kelamin = laki;
    } else if (genderValue == 'P' || genderValue == 'p') {
        jenis_kelamin = perempuan;
    } else {
        printf("Input jenis kelamin tidak valid.\n");
        return 1;
    }

    if (confirmurmarriedValue == 'y' || confirmurmarriedValue == 'Y') {
        status_menikah = sudah;
    } else if (confirmurmarriedValue == 't' || confirmurmarriedValue == 'T') {
        status_menikah = belum;
    } else {
        printf("Input menikah tidak valid.\n");
        return 1;
    }

    printf("Anda adalah");

    if (jenis_kelamin == laki) {
        printf(" Laki");
    } else if (jenis_kelamin == perempuan) {
        printf(" Perempuan");
    }

    if (urAge = 30 && urAge > 30 ) {
        printf(" dewasa");
    } else if (urAge < 30) {
        printf(" muda");
    }

    if (status_menikah == sudah) {
        printf(" yang sudah menikah");
    } else if (status_menikah == belum) {
        printf(" yang belum menikah");
    }

    return 0;
}