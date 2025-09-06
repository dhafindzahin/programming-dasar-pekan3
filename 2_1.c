/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 3 – Tipe Data
 * Tugas : [3]
 * Deskripsi singkat: Konversi suhu dari Celcius ke Fahrenheit
 * Tanggal: [06 September 2025]
 */
#include <stdio.h>

int main() {
    float celcius, fahrenheit;

    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);

    fahrenheit = celcius * 1.8 + 32;

    printf("Suhu dalam Fahrenheit adalah: %.2f\n", fahrenheit);

    return 0;
}
