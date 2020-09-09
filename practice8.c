#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i, me, d4=0;
	for (i=1;i<=10;i++)
	{
		me = rand()%6+1;
		if (me ==4)
			d4++;
	}
	printf("%d\n",d4);
	return 0;
}
