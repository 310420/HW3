#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum stat
{
	Continue,won,lost
};

int rolldice(void);

int main(void)
{
	int sum;
	int mypoint;

	enum stat gamestatus;

	srand(time(NULL));
	sum = rolldice();

	switch (sum)
	{
	case 7:
	case 11:
		gamestatus = won;
		break;

	case 2:
	case 3:
	case 12:
		gamestatus = lost;
		break;

	default:
		gamestatus = Continue;
		mypoint = sum;
		printf("point is %d\n", mypoint);
		break;
	}
	while (gamestatus==Continue)
	{
		sum = rolldice();
		if (sum == mypoint)
			gamestatus = won;
		else
			if (sum == 7)
				gamestatus = lost;
	}
	if (gamestatus == won)
		printf("player wins\n");
	else
		printf("player loses\n");
	system("pause");
	return 0;
}

int rolldice(void)
{
	int die1, die2, worksum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	worksum = die1 + die2;
	printf("player rolled %d + %d = %d\n", die1, die2, worksum);
	return worksum;
}