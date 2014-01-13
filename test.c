#include <stdio.h>

int main()
{
	int a = 2;
	int b = 3;
	int c = a+b;
	int d = a-b;
	int e = a*b;
	int f = a/b;
	
	printf("a + b = %i\n", c);
	printf("a - b = %i\n", d);
	printf("a * b = %i\n", e);
	printf("a / b = %i\n", f);

	int z, y;
	do{
		printf("Please enter your numbers: ");
		scanf("%i %i", &z, &y);
		printf("Average= %i\n", (z+y)/2);

	}while((z>=1) && (z<=5));

	return 0;
}
