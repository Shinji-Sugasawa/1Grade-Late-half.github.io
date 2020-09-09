#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int i;
	srand(3);
	for (i=1;i<=10;i++)
		printf("%d\n",rand()%6+1);
	return 0;
}
