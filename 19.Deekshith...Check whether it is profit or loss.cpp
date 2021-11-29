#include<stdio.h>
main()
{
	int CP,SP,x;
	printf("Enter the values of CP and SP:");
	scanf("%d%d",&CP,&SP);
	x=(SP-CP);
	if(x>0)
	{
		printf("The profit is %d",x);
	}
	else
	{
		printf("The loss is %d",x);
	}
}
