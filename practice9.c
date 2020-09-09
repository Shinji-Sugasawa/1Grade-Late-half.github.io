#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i, me, d6=0, num;
	scanf("%d", &num);
	for (i=1;i<=num;i++)
	{
		me = rand()%6+1;
		if(me == 6) d6++;
	}
	printf ("%d\n",me);
	return 0;
}
