#include<stdio.h>
#include<math.h>
main()
{
	int sq,cu,n,i=1;
	float sr;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("NUMBER     SQUARE     CUBE     SQUARE ROOT\n");
	while(i<=n)
	{
		sq=i*i;
		cu=i*i*i;
		sr=sqrt(i);
		printf("%5d     %5d     %5d     %5.2f\n",i,sq,cu,sr);
		i=i+1;
	}
}
