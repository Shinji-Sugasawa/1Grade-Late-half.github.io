#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a[200],i,d1,d2,d3,d4,d5,d6,seed,me;
	printf("seed?");
	scanf("%d",&seed);
	d1=d2=d3=d4=d5=d6=0;
	for (i=1;i<=100;i++)
	{
		me = rand()%6+1;
		a[ i ] = me;
	}
	for (i=1;i<=100;i++)
	{
		me = a[ i ];
		if (me == 1) d1++;
		if (me == 2) d2++;
		if (me == 3) d3++;
		if (me == 4) d4++;
		if (me == 5) d5++;
		if (me == 6) d6++;
	}
	printf ("1:%2d\n",d1);
	printf ("2:%2d\n",d2);
	printf ("3:%2d\n",d3);
	printf ("4:%2d\n",d4);
	printf ("5:%2d\n",d5);
	printf ("6:%2d\n",d6);
	
	return 0;
}