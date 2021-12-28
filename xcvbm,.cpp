#include<stdio.h>
main()
{
	int i,j;
	for (i=4;i>=1;i=i-1)
	{
		for (j=1;j<=i;j++)
		{
			printf("  *\t");
		}
		printf("\n");
	}
}
