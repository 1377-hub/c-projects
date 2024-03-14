#include <stdio.h>
int main ()
{

	int math,eng,kisw,sum;
		float average;
	printf("Enter three marks");
	scanf("%d%d%d",&math,&eng,&kisw);
	sum=math+kisw+eng;
	printf("total sum=%d\n",sum);
	average=sum/(float)3;
	printf("average=%.2f\n",average);
	if(average>=70&&average<=100)
	{
		printf("\nYour grade is A");
	}
	else if(average>=60&&average<70)
	{
	printf("\nYour grade is B");	
	}
	else if(average>=50&&average<60)
	{
	printf("\nYour grade is C");	
	}
	else if(average>=40&&average<50)
	{
		printf("\nYour grade is d");
	}
	else{
		printf("\nsupplementary F");
    }	
    return 0;
	}
