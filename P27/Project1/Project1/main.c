#include<stdio.h>
#include<stdlib.h>

long fact(long num);
int main(void)
{
	int i;
	for (i = 0; i <= 10; i++)
		printf("%2d! = %1d\n", i, fact(i));
	system("pause");
	return 0;
}

long fact(long num)
{
	if (num <= 1)
		return 1;
	else
		return(num*fact(num - 1));
}