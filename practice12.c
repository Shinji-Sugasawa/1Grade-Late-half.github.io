#include <stdio.h>
#include <stdlib.h>
int dice (void)
{
	return rand ()%6+1;
}
int main(void)
{
	int i, me, d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,seed;
	scanf("%d",&seed);
	srand (seed);
	for (i=1;i<=10;i++)
	{
		me = dice();
		if(me == 6) d6++;
		if(me == 5) d5++;
		if(me == 4) d4++;
		if(me == 3) d3++;
		if(me == 2) d2++;
		if(me == 1) d1++;
	}
	printf ("%d %d %d %d %d %d\n",d1,d2,d3,d4,d5,d6);
	return 0;
}
