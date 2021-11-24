#include<stdio.h>
main()
{
	float a,b,sum=0,difference=0,product=0,quotient=0;
	printf("Enter the two numbers:");
	scanf("%f%f",&a,&b);
	sum =a+b;
	difference =a-b;
	product =a*b;
	quotient =a/b;
	printf("sum=%f\ndifference=%f\nproduct=%f\nquotient=%f\n",sum,difference,product,quotient);
}
