//
//ans-1
//
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int math[100];
	int i,seed,count;
	count = 0;
	
	printf ("seed?");
	scanf ("%d", &seed);
	
	for (i=1; i<=100; i++)
	{
		math[i] = rand()%101;
	}
	for (i=1; i<=100; i++)
	{
		if (math[i] == 100)
		{
			count = count + 1;
		}
	}
	printf("100:%d\n",count);
	
	return 0;
}