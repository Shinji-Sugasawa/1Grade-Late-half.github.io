#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int a[200],g1,g2,g3,g4,g5,g6;
	int i;
	
	g1=g2=g3=g4=g5=g6=0;
	for (i=1; i<=168; i++)
	{
		a[i]=rand()%6+1;
	}
	for(i=1;i<=168;i++)
	{
		if(a[i]==1) g1++;
		if(a[i]==2) g2++;
		if(a[i]==3) g3++;
		if(a[i]==4) g4++;
		if(a[i]==5) g5++;
		if(a[i]==6) g6++;
	}
	printf ("%d %d %d %d %d %d\n",g1,g2,g3,g4,g5,g6);
	return 0;
}