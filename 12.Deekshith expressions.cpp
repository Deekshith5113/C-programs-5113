#include<stdio.h>
main()
{
	int x,y,z,a;
	x=(2*3)+(4*5);
	y=(7*(6%15))/9;
	z=((4+8)/2)+(4*2);
	a=(0>5)||(0<0);
	printf("%d\n%d\n%d\n%d",x,y,z,a);
	printf("\n%d",3%2);
	printf("\n%d",'A');
	printf("\n%c\n",'A'+10);
	printf("%d",printf("Good"));
	printf("\n%d",- -2);
	printf("\n%d",!10);
	printf("\n%d",5>3?"\n5 is max":"3 is max");
}
