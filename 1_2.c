/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 3 – Tipe Data
 * Tugas : [3]
 * Deskripsi singkat: Hierarki operasi aritmatika
 * Tanggal: [06 September 2025]
 */
 #include <stdio.h>

int main() {
    int a = 12, b = 2, c = 3, d = 4;

    printf("%d\n", a % b);
    printf("%d\n", a - c);
    printf("%d\n", a + b);
    printf("%d\n", a / d);
    printf("%d\n", a / d * d + a % d);
    printf("%d\n", a % d / d * a - c);

    return 0;
}
