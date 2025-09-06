/*
 * Nama  : [Muh. Dhafin Dzahin]
 * NIM   : [4124600026]
 * Kelas : [Meka 2A]
 * Praktik: 3 – Tipe Data
 * Tugas : [3]
 * Deskripsi singkat: Menampilkan berbagai variabel tipe data
 * Tanggal: [06 September 2025]
 */
#include <stdio.h>

int main()
{
	int var_bulat = 32767;
    float var_pecahan1 = 339.2345678f;   
	double var_pecahan2 = 3.4567e+40; 
    char var_karakter = 'A';  
	
	printf("var_bulat     = %d\n", var_bulat);
    printf("var_pecahan1  = %f\n", var_pecahan1);
    printf("var_pecahan2  = %lf\n", var_pecahan2);
    printf("var_karakter  = %c\n", var_karakter);
	
	return 0;
}
