#include<stdio.h>
main()
{
	int x,y=1;
	printf("Enter the number:");
	scanf("%d",&x);
	while (y<=20)
	{
		printf("%d * %d = %d\n",x,y,x*y);
		y=y+1;
	}
}
