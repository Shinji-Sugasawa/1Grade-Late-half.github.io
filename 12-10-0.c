#include <stdio.h>
#include <stdlib.h>

int check (int r1,int r2,int r3,int r4)
{
	int judge = 0;
	if( r1 == 2 && r2 == 4 && r3== 1 && r4 ==3)
		judge = 1;
	return judge;
}
void draw (int r1,int r2,int r3,int r4)
{
	printf ("-Q--\n");
	printf ("---Q\n");
	printf ("Q---\n");
	printf ("--Q-\n");
	
}
int main (void)
{
	int r1,r2,r3,r4,seed;
	int count = 0;
	
	printf ("seed? ");
	scanf ("%d",seed);
	
	srand (seed);
	
	while(1)
	{
		int i,j,k,m;
		count = count + 1;
		
		
	}
	printf ("count=%d\n",count);
	return 0;
}
		