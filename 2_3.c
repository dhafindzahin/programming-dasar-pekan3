/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 3 – Tipe Data
 * Tugas : [3]
 * Deskripsi singkat: Menghitung luas lingkaran dari jari-jari 
 * Tanggal: [06 September 2025]
 */
#include <stdio.h>

#define PI 3.14f

int main() {
    float r, luas;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);

    luas = PI * r * r;

    printf("Luas lingkaran adalah: %.2f\n", luas);

    return 0;
}
