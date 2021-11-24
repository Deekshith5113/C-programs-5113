#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g;
	printf("Enter the values a,b,c,d:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=(a>b)&&(c>d);
	f=(a>b)||(c>d);
	g=!(a>b);
	printf("%d\n%d\n%d",e,f,g);
}
