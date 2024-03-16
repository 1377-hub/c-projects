#include<stdio.h>
int main()
{
	int purchase,amount;
	float discount;
	printf("Enter the purchase");
	scanf("%d",&purchase);
	if(purchase>=30000)
	{discount=purchase*0.02;
		amount=purchase-discount;
		printf("amount to be paid%d",amount);
		}
	if(purchase<30000)	
	{	discount=purchase*0.01;
	amount=purchase-discount;
		printf("amount to be paid%d",amount);
	}
	return 0;
}