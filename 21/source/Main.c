#include<stdio.h>
#include<stdlib.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(void)
{
	printf("First call to each function�G\n");
	staticArrayInit();
	automaticArrayInit();

	printf("\n\nSecond call to each function�G\n");
	staticArrayInit();
	automaticArrayInit();
	printf("\n");
	system("pause");
	return 0;
}

void staticArrayInit(void)
{
	static int array1[3];
	int i;
	printf("\n\nValues on entering staticArrayInit�G\n");

	for (i = 0; i <= 2; i++)
	{
		printf("array1[%d] = %d ", i, array1[i]);
	}
	printf("\nValues on exiting staticArrayInit�G\n");

	for (i = 0; i <= 2; i++)
	{
		printf("array1[%d] = %d ", i, array1[i]+=5);
	}
}

void automaticArrayInit(void)
{
	int array2[3] = { 1,2,3 };
	int i;

	printf("\n\nValues on entering automaticArrayInit�G\n");

	for (i = 0; i <= 2; i++)
	{
		printf("array2[%d] = %d ", i, array2[i]);
	}
	printf("\nValues on exiting automaticArrayInit�G\n");

	for (i = 0; i <= 2; i++)
	{
		printf("array2[%d] = %d ", i, array2[i] += 5);
	}
}