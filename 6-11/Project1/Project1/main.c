#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main(void)
{
	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int pass,hold,z,y=1;
	size_t i;
	puts("Data items in original order");

	for (i = 0; i < SIZE; ++i)
		printf("%4d", a[i]);

	for ( pass = 1; pass < SIZE; pass++)
	{
		z = 1;
		for (i = 0; i < SIZE - y; ++i)
		{
			if (a[i] > a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}
			else
				z++;
			
		}
		if (z == (SIZE - y))
			pass = SIZE;
		y++;
	}

	puts("\nData items in ascending order");

	for (i = 0; i < SIZE; ++i)
		printf("%4d", a[i]);

	puts("");
	
	system("pause");
	return 0;
}