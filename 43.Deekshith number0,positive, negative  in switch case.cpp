#include<stdio.h>
main()
{
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	switch(x>0)
	{
		case 1:printf("Positive");
				break;
		case 0: switch(x<0)
					{
						case 1:printf("Negative");
								break;
						case 0:printf("Zero");
								break;		
					}
	}
	
}
