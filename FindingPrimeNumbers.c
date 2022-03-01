#include <stdio.h>
int main()
{
	int limit = 625; //Set limit that the program will check till
	 //Set initial variables
	int i = 2;
	int mult = 2;
	int a[625]; //Create a 100 cell array
	for (int n = 1; n <= limit; n++)
	{
		a[n - 1] = n;
	}
	for (int p = 1; p <= limit; p++)
	{
		for (int sub = 4; sub <= limit;)
		{
			for (int f = 0; f <= limit; f++)
			{
				if (a[f] == sub)
					a[f] = 0;
			}
			i++;
			sub = mult * i;
		}
		mult++;
		i = 2;
		int sub = 0;
	}
	for (int n = 1; n <= limit; n++)
	{
		a[0] = 0;
		if (a[n-1] != 0)
			printf("% d", a[n - 1]);
	}
return 0;
}

