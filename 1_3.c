/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 3 – Tipe Data
 * Tugas : [3]
 * Deskripsi singkat: Menghitung nilai diskriminan
 * Tanggal: [06 September 2025]
 */
#include <stdio.h>

int main() {
    int a, b, c, d;
	
    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);
    printf("Masukkan nilai c: ");
    scanf("%d", &c);
    d = (b * b) - (4 * a * c);
	
    printf("Nilai diskriminan adalah: %d\n", d);

    return 0;
}
