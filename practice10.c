#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i, me, d6=0, num,seed;
	scanf("%d%d",&num,&seed);
	srand (seed);
	for (i=1;i<=num;i++)
	{
		me = rand()%6+1;
		if(me == 6) d6++;
	}
	printf ("%d\n",d6);
	return 0;
}
