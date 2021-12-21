#include<stdio.h>
main()
{
	char c=65,z=97;
	printf("All the upper case alphabets are:  \n");
	while (c<=90)
	{
		printf("%c ",c);
		c=c+1;
	}
	printf("\nAll the lower case alphabets are: \n");
	while (z<=122)
	{
		printf("%c ",z);
		z=z+1;
	}
}

