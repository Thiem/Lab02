#include <stdio.h>
#include <conio.h>
main(){
	float top,bottom,height;
	float S;
	printf("Top = ");
	scanf("%f", &top);
	printf("Bottom = ");
	scanf("%f", &bottom);
	printf("Height = ");
	scanf("%f", &height);
	S = ((top+bottom)*height)/2;
	printf("S = %f\n", S);
	return 0;
}
