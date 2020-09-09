#include <stdio.h>

int main (void)
{
	int i;
	for (i=0; i<10; i++)
	{
		if(i)
			printf ("%d: True\n", i);
		else
			printf ("%d:False\n", i);
	}
	return 0;
}