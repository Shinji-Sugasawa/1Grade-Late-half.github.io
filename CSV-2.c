#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[200];
	int i, seed;
	
	scanf("%d", &seed);
	srand(seed);
	for (i=1; i<=50; i++)
	{
		a[i]=rand() %16+1;
	}
	for (i=1; i<=50; i++)
	{
		//printf("%d,mv%d\n", 1832000+i, a[i]);
		printf ("1832%03d,mv%d\n", i, a[i]);
	}
	return 0;
}