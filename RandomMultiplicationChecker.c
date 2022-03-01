#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int ran1();
int ran2();
int product();
int correctresponce();
int inccorectreponce();

int main()
{
	srand(time(NULL));
	int total, num11, num22, answer = 0;
	while (answer != -1) {
		num11 = ran1();
		num22 = ran2();
		int answer = 2;
		printf("What is the product of %d and %d(type -1 to exit): ", num11, num22);
		scanf("%d", &answer);
		total = num11 * num22;
		if (total == answer)
		{
			correctresponce();
		}
		else
		{
			while (total != answer)
			{
				if (answer == -1)
					break;
				inccorectreponce();
				scanf("%d", &answer);

			}
			if (answer != -1)
				correctresponce();
		}
		if (answer == -1)
			break;
	}
	printf("That all Fokes!");


	return 0;
}


int ran1()
{
	int num1 = 0;
	num1 = 1 + (int)rand() % 10;
	return num1;
}

int ran2()
{
	int num2 = 0;
	num2 = 1 + (int)rand() % 10;
	return num2;
}

int product(int ans, int n1, int n2)
{
	int amount = 0;
	while (ans != -1)
	{
		amount = n1 * n2;
	}
	return amount;
}


int correctresponce()
{
	int ran4;
	ran4 = 1 + (int)rand() % 4;
	switch (ran4)
	{
	case 1:
		printf("Very good!\n\n");
		break;
	case 2:
		printf("Ecellent!\n\n");
		break;
	case 3:
		printf("Nice work!\n\n");
		break;
	case 4:
		printf("Keep up the good work!\n\n");
		break;
	}
	return 0;
}

int inccorectreponce()
{
	int ran4;
	ran4 = 1 + (int)rand() % 4;
	switch (ran4)
	{
	case 1:
		printf("No. Please try again.\n\n");
		break;
	case 2:
		printf("Wrong. Try once more.\n\n");
		break;
	case 3:
		printf("Don't give up!\n\n");
		break;
	case 4:
		printf("No. Keep trying.\n\n");
		break;
	}
	return 0;
}