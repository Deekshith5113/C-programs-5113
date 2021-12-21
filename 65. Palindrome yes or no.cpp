#include<stdio.h>
main()
{
	int x,n,r=0,num;
	printf("Enter the number:");
	scanf("%d",&n);
	num=n;
	while (n>0)
	{
		x=n%10;
		r=r*10+x;
		n=n/10;
	}
	if (r==num)
	{
		printf("It is a palindrome");
	}
	else
	{
		printf("It is not a palindrome");
	}
}
