#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[200],g[7]={0},i,j;
	for (i=1;i<=168;i++)
	{
		a[i]=rand()%6+1;
	}
	for (i=1;i<=168;i++)
	{
		for(j=1;j<=6;j++)
		{
			if(a[i]==j)
			{
				g[j]++;
				break;
			}
		}
	}
	for(i=1;i<=6;i++)
	{
		printf("%3d",g[i]);
	}
	printf("\n");
	return 0;
}