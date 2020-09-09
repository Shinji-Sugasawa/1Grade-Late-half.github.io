#include <stdio.h>

int check(int r1,int r2, int r3, int r4)
{
	return 1;
}

int main(void)
{
	int i, j, k, m;
	int count=0;
	
	for (i=1; i<=4; i++)
	{
		for (j=1; j<=4; j++)
		{
			for (k=1; k<=4; k++)
			{
				for (m=1; m<=4; m++)
				{
					if (check (i,j,k,m)!=0)
					{
						printf ("%d %d %d %d\n",i,j,k,m);
					}
					count=count +1;
				}
			}
		}
	}
	printf ("combination = %d\n", count);
	return 0;
}