#include <stdio.h>
int main()
{
	float weight,height;
	printf("Nhap so can va chieu cao la:");
	scanf("%f%f", &weight,&height);
	printf("Chi so BMI la: %.2f", (float)weight/(height*height));
	return 0;
}
