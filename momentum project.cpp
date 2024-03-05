#include<stdio.h>

main()
{
	int unit,bill,sc,total,total_bill;
	printf(" enter your unit reading = ");
	scanf("%d",&unit);
	if(unit<50)
	{
		bill = unit * 0.50;
	}
	else if(unit<150)
	{
		bill = (unit-50) * 0.75 + 25;
	}
	else if(unit<250)
	{
		bill = (unit-150) * 1.20 + 100;
	}
	else
	{
		bill = (unit-250) * 1.50 + 220; 
	}
	printf("Your Bill = %d\n",bill);
	 sc = bill * 20/100;
	 printf("Surcharge for Bill = %d\n",sc);
	 total_bill = bill + sc;
	 
	 printf("your electricity bill is = %d\n",total_bill);
	
}