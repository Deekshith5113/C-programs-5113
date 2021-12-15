#include<stdio.h>
main()
{
	int a=651,b=900;
	while(a<b)
	{
		if (a%5==0)
		{
			printf("%d\n",a);
		}
		a=a+1;
	}
}
