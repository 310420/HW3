#include<stdio.h>
#include<stdlib.h>

int squ(int y);

int main(void)
{
	int x;

	for ( x = 1; x <= 10; x++)
	{
		printf("%d  ", squ(x));
	}
	printf("\n");
	system("pause");
	return 0;
}

int squ(int y)
{
	return y*y;
}