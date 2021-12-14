#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float D,firstroot,secondroot;
	printf("Enter the values of the a,b,c in the quadratic equation a(x^2)+bx+c:");
	scanf("%d%d%d",&a,&b,&c);
	D=((b*b)-(4*a*c));
	if (D>0)
	{
		firstroot=((-b+sqrt(D))/(2*a));
		secondroot=((-b-sqrt(D))/(2*a));
		printf("The roots %f and %f are real and distinct",firstroot,secondroot);
	}
	else if(D==0)
	{
		firstroot=((-b+sqrt(D))/(2*a));
		secondroot=((-b-sqrt(D))/(2*a));
		printf("The roots %f and %f are real and equal",firstroot,secondroot);
	}
	else
	{
		printf("The roots are imaginary");
    }
}
