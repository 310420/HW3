#include<stdio.h>
#include<stdlib.h>

int maxi(int x, int y, int z);

int main(void)
{
	int num1,num2,num3;
	printf("enter three integers:");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("maximum is: %d\n", maxi(num1, num2, num3));
	system("pause");
	return 0;
}

int maxi(int x, int y, int z)
{
	int max = x;

	if (y > max)
		max = y;
	if (z>max)
		max = z;
	return max;
}