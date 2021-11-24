#include<stdio.h>
main()
{
	int f,c=0;
	printf("Enter the temperature in fahrenheit=",f);
	scanf("%d",&f);
	c=(5*(f-32))/9;
	printf("c=%d",c);
}
