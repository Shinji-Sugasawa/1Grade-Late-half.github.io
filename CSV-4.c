#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int a[200];
	int g[7];
	int i ;
	
	g[1]=g[2]=g[3]=g[4]=g[5]=g[6]=0;
	for (i=1;i<=168; i++)
	{
		a[i]=rand()%6+1;
	}
	for (i=1;i<=168; i++)
	{
		if(a[i]==1) g[1]++;
		if(a[i]==2) g[2]++;
		if(a[i]==3) g[3]++;
		if(a[i]==4) g[4]++;
		if(a[i]==5) g[5]++;
		if(a[i]==6) g[6]++;
	}
	for (i=1;i<=6;i++)
	{
		printf("%3d",g[i]);
	}
	printf ("\n");
	return 0;
}