//
//ans-3
//
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int math[101],i;
	int seed;
	int pass, fail;
	math[101]=0;
	pass =0; fail =0;
	printf ("please input a seed:");
	scanf ("%d",&seed);
	
	for(i=1;i<=100;i++)
	{
		math[i] = rand () % 101;
	}
	for(i=1;i<=100;i++)
	{
		if ( math[i] >= 60 )
		{
			pass = pass + 1;
		}
		else
		{
			fail = fail + 1;
		}
	}
	printf("pass:%2d",pass);
	printf("fail:%2d\n",fail);
	return 0;
}