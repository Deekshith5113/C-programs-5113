#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the numbers a and b:");
	scanf("%d%d",&a,&b);
	while (a<b)
	{
		if(a%2==0)
		{
			printf("%d\n",a);
		}
		a=a+1;
	}
}
