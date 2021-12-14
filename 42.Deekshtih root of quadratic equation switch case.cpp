#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float d,r1,r2;
	printf("Enter the values of a,b,c in ax^2+bx+c:");
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b-(4*a*c));
	r1=((-b+sqrt(d))/(2*a));
	r2=((-b-sqrt(d))/(2*a));
	switch(d>0)
	{
		case 1:printf("The real and distict root are %f and %f",r1,r2);
				break;
		case 0: switch(d<0)
				{
					case 1:printf("The roots are imaginary");
							break;
					case 0:printf("the roots real and equal are %f and %f",r1,r2);
							break;		
				}		
	}
	
}
