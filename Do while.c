#include <stdio.h>
int main()
{
	int a;
	float discount;
	printf("Enter n.o of pictures taken");
	scanf("%d",&a);
	do
	{
	printf("%d\n",a);
     a=a*50;
	}
	while(a>=50&&a<=1000);
	if(a=>5)
	{
	discount=a-50;
	}
	return 0;
}