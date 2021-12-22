//Sum of square of digits of a number
#include<stdio.h>
main()
{
	int n,x,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	while (n!=0)
	{
		x=n%10;
		sum=sum+x*x;
		n=n/10;
	}
	printf("The Sum of squares the digits of the number is %d",sum); 
}
