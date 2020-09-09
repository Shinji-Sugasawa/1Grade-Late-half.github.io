#include <stdio.h>
#include <stdlib.h>
#define N 30

double my_rand(void)
{
	return (double)rand()/2147483647;
}

int main(void)
{
	double x, y, pai;
	int i, count;
	count=0;
	srand(1);
	for(i=0;i<N;i++)
	{
		x=my_rand(); 
		printf("x=%f ",x);
		y=my_rand(); 
		printf("y=%f ",y);
		if(x*x+y*y<=1)
			count=count+1;
	}
	pai=(double)4*count/N;
	printf("pai=%f\n" ,pai);
	return 0;
}