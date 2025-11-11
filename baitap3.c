#include <stdio.h>
int main()
{
	float length, width;
	printf("Nhap chieu dai va chieu rong");
	scanf("%f%f", &length, &width);
	printf("Chu vi la: %.2f\n", (length+width)*2);
	printf("Dien tich la: %.2f\n", length*width);
	return 0;
}
