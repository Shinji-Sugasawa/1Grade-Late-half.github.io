#include <stdio.h>
#include <stdlib.h>
double pi_rand(void)
{
	return (rand()/2147483647.0);
}
int main (void)
{
	double x, y, pai;
	int count, seed;
	printf ("int    :%d\n",sizeof(int));
	printf ("float  :%d\n",sizeof(float));
	printf ("double :%d\n",sizeof(double));
	return 0;
	count = 0;
	for(seed=1; seed<=10; seed++)
	srand(seed);
	int main (void)
	{
		printf ("int    :%d\n",sizeof(int));
	printf ("float  :%d\n",sizeof(float));
	printf ("double :%d\n",sizeof(double));
	return 0;
	}
	int i, me, d6;
	for(i=1; i<=50; i++)
	{
		x = pi_rand ();
		y = pi_rand ();
		if (x*x + y*y <=1)
			count ++;
	}
	pai = count*4.0/50;
	printf("=%f\n",pai);
	return 0;
}