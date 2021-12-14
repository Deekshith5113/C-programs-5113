#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the numbers:");
	scanf("%d%d%d",&a,&b,&c);
	switch (a<b&&a<c)
	{
		case 1:printf("%d is min",a);
				break;
		case 0: switch(b<c&&b<a)
				{
					case 1:printf("%d is min",b);
							break;
					case 0:printf("%d is min",c);
							break;		
				}
	}
}
