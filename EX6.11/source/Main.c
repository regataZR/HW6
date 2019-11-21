#include<stdio.h>
#include<stdlib.h>
int size = 10;
int jj = 10;

int a[10] = {151,499,63,52,30,12,15,28,25,99};
int temp[1] = {0};

int main(void)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < jj; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp[j] = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp[j];
			}
		}
		jj--;
	}
	for (int k = 1; k < size+1; k++)
	{
		printf("%d ", a[k]);
	}
	printf("\n");

	system("pause");
	return	0;
}