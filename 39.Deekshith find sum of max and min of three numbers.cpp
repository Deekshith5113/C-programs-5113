#include<stdio.h>
main()
{
	int a,b,c,min,max,sum;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b&&a>c)
	{
		max=a;
		if(b>c)
		{
			min=c;
		}
		else
		{
			min=b;
		}	
	}
	else if(b>a&&b>c)
	{
		max=b;
		if(c>a)
		{
			min=a;
		}
		else
		{
			min=c;
		}	
	}
    else if(c>b&&c>a)
	{
		max=c;
		if(b>a)
		{
			min=a;
		}
		else
		{
			min=b;
		}	
	}
	sum=(min+max);
	printf("The sum of min and max is %d",sum);			
}

