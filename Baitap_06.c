#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float toan;
	float ly;
	float hoa;
	float TB,sum;
	printf ("Diem Toan la: ");
	scanf ("%f",&toan);
	printf ("\nDiem Hoa la: ");
	scanf ("%f",&hoa);
	printf ("\nDiem Ly la: ");
	scanf ("%f",&ly);
	sum = toan+hoa+ly;
	TB = sum/3;
	printf ("Tong diem 3 mon la: %0.1f\n",sum);
	printf ("Trung Binh 3 mon la: %0.1f", TB);
	return 0;
}
