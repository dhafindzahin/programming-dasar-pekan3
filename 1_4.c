/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 3 – Tipe Data
 * Tugas : [3]
 * Deskripsi singkat: Jika pada kasus 2 dan 3 int diubah menjadi float
 * Tanggal: [06 September 2025]
 */
 #include <stdio.h>

int main() {
    float a1 = 12, b1 = 2, c1 = 3, d1 = 4;

    printf("%f\n", a1 % b1);
    printf("%f\n", a1 - c1);
    printf("%f\n", a1 + b1);
    printf("%f\n", a1 / d1);
    printf("%f\n", a1 / d1 * d1 + a1 % d1);
    printf("%f\n", a1 % d1 / d1 * a1 - c1);

    float a2 = 12, b2 = 2, c2 = 3, d2 = 4;

    printf("%f\n", a2 % b2);
    printf("%f\n", a2 - c2);
    printf("%f\n", a2 + b2);
    printf("%f\n", a2 / d2);
    printf("%f\n", a2 / d2 * d2 + a2 % d2);
    printf("%f\n", a2 % d2 / d2 * a2 - c2);
	
    return 0;
}
