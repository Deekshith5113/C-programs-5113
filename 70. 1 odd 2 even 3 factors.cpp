#include<stdio.h>
#include<stdlib.h>
main()
{
	int i=1,n,f=1,c;
	printf("If you want odd numbers in the range enter 1\nIf you want even numbers in the range enter 2\nIf you want factors of the number enter 3\nEnter 4 to exit application\n");
	printf("Enter your choice:");
	scanf("%d",&c);
	if (c==4)
	{
		exit(0);
	}
	printf("Enter the number:");
	scanf("%d",&n);
	if (c==1)
	{
		while(i<=n)
		{
			if(i%2!=0)
			{
				printf("%d\n",i);
			}
			i=i+1;
		}
	}
	else if (c==2)
	{
		while(i<=n)
		{
			if(i%2==0)
			{
				printf("%d\n",i);
			}
			i=i+1;
		}
	}
	else if (c==3)
	{
		while (i<=n)
		{
			if (n%i==0)
			{
				printf("%d\n",i);
			}
		i=i+1;
		}
	}
	return 0;
}
