#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float bk;
	float dai,rong;
	float a;
	float cht,sht,chv,shv,chcn,shcn;
	printf ("Canh hinh vuong = ");
	scanf ("%f",&a);
		printf ("\nChieu dai hinh chu nhat = ");
		scanf ("%f",&dai);
			printf ("\nChieu rong hinh chu nhat =  ");
			scanf ("%f",&rong);
				printf ("\nBan kinh hinh tron =  ");
				scanf ("%f",&bk);
	cht = 2*bk*3.14;
	sht = bk*bk*3.14;
		chv = a*4;
		shv = a*a;
			chcn = (dai+rong)*2;
			shcn = dai*rong;
	printf ("\nChu vi hinh tron =  %0.1f\n",cht);
	printf ("Dien tich hinh tron = %0.1f\n", sht);
		printf ("Chu vi hinh vuong =  %0.1f\n",chv);
		printf ("Dien tich hinh vuong = %0.1f\n", shv);
			printf ("Chu vi hinh hinh chu nhat =  %0.1f\n",chcn);
			printf ("Dien tich hinh chu nhat = %0.1f\n", shcn);
	return 0;
}
