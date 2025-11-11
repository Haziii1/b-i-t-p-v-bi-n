#include <stdio.h>
int main()
{
	int a,b;
	printf("nhap so a: ");
	scanf("%d", &a);
	printf("nhap so b: ");
	scanf("%d", &b);
	a = a + b;
	b = a-b;
	a = a - b;
	printf("so hoan doi la: a = %d b = %d", a, b);
return 0;
}
