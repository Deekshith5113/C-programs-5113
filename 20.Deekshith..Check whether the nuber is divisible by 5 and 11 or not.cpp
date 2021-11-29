#include<stdio.h>
main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num%5==0&&num%11==0)
	{
		printf("The  nummber %d is divisible by 5 and 11",num);
	}
	else
	{
		printf("The  nummber %d is not divisible by 5 and 11",num);
	}
}
