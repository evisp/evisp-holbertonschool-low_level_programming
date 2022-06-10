#include "main.h"

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
			printf("Fizz");
		if (num % 5 == 0)
			printf("Buzz");
		if (num % 3 != 0 && num % 5 != 0)
		        printf("%d", num);
		if (a != 100)
			printf(" ");
	}
	printf("\n");
	
	return (0);
}
