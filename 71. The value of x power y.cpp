#include<stdio.h>
main()
{
	int x,y,i=1,power=1;
	printf("Enter the x and y values:");
	scanf("%d%d",&x,&y);
	while (i<=y)
	{
		power=power*x;
		i=i+1;
	}
	printf("The value of x power y is:%d",power);
}
