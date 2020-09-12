#include<stdio.h>
  
int main() {
	int i = 15;
	float f = 3.456;
	double d = 3.4567891235;
	char c = 'E';
	printf("/*======== Kich thuoc cua cac kieu du lieu ========*/\n");
	printf("\n\tKieu int: %d Byte", sizeof(int));
	printf("\n\tSo nguyen: %d",i);
		printf("\n\n\tKieu float: %d Byte", sizeof(float));
		printf("\n\tSo thuc kieu float: %f",f);
			printf("\n\n\tKieu double la: %d Byte", sizeof(double));
			printf("\n\tSo thuc kieu double: %d",d);
				printf("\n\tKieu char: %d Byte", sizeof(char));
				printf("\n\n\tKi tu: %c",c);
					printf("\n\n\tKieu long int: %d Byte", sizeof(long int));
						printf("\n\n\tKieu long double: %d Byte", sizeof(long double));
	printf("\n\n/*================================================*/\n");

   return (0);
}
