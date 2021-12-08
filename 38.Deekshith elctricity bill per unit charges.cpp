#include<stdio.h>
main()
{
	int u;
	float surcharge,bill,totalbill;
	printf("Enter units:");
	scanf("%d",&u);
	if (u>0&&u<=50)
	{
		bill=(0.5*u);
	}
	else if (u>50&&u<=150)
	{
		bill=(50*0.5)+(0.75*(u-50));
	}
	else if (u>150&&u<=250)
	{
		bill=(1.25*(u-150))+(50*0.5)+(0.75*(100));
	}
	else if (u>250)
	{
		bill=(1.50*(u-250))+(1.25*100)+(50*0.5)+(0.75*(100));
	}
	surcharge=((20*bill)/100);
	totalbill=bill+surcharge;
	printf("The Total Electricity bill is:%.2f Rupees",totalbill);
}
