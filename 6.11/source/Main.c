#include <stdio.h>
#include <stdlib.h>
#define SIZE 10 


int main(void)
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int b[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int c[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int c_1[SIZE] = { 0 },c_1t=0;
	int pass,pass_b=0;
	size_t i;
	int hold;

	puts("Data items in original order");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	for (pass = 1; pass < SIZE; ++pass)
	{
		for (i = 0; i < SIZE - 1; ++i)
		{
			if (a[i] > a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
			}

		}

		for (i = 0; i < SIZE; i++)
		{
			printf("%4d", a[i]);
		}
		printf("\n");
	}

	puts("\nData items in original order");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", b[i]);
	}
	printf("\n");
	for (pass = 1; pass < SIZE; ++pass)
	{
		for (i = 0; i < (SIZE - pass); ++i)
		{
			if (b[i] > b[i + 1])
			{
				hold = b[i];
				b[i] = b[i + 1];
				b[i + 1] = hold;
			}
		}

		for (i = 0; i < SIZE; i++)
		{
			printf("%4d", b[i]);
		}
		printf("\n");
	}

	puts("\nData items in original order");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", c[i]);
	}
	printf("\n");
	for (pass = 1; pass < SIZE; pass++)
	{
		c_1t = 0;

		for (i = 0; i < SIZE - 1; i++)
		{
			if (c[i] > c[i + 1])
			{
				hold = c[i];
				c[i] = c[i + 1];
				c[i + 1] = hold;
				c_1[i]=0;
			}
			else c_1[i] = 1;
		}
		
		for (i = 0; i < SIZE; i++)c_1t += c_1[i];
		if (c_1t == 9)
		{
			pass_b = pass;
			break;
		}

		for (i = 0; i < SIZE; i++)
		{
			printf("%4d", c[i]);
		}		
		printf(" %d\n",c_1t);		
	}	

	puts("\nData items in ascending oeder(原方法)");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d",a[i]);		
	}
	puts("\nData items in ascending oeder(A方法)");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", b[i]);
	}
	puts("\nData items in ascending oeder(B方法)");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", c[i]);
	}
	printf(" 共%d個回合", pass_b);
	printf("\n");

	system("pause");
	return 0;
}