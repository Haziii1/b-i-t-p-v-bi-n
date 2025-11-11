#include <stdio.h>
int main()
{
	float C;
	printf("Nhap nhiet do C: ");
	scanf("%f", &C);
	printf("Nhap nhiet do F:%.2f", (float)(C*9)/5 + 32);
	return 0;
}
