//adding reversed numbers
#include<stdio.h>

int rev(int a)
{
	int r=0;
	while(a>0)
	{
		r=r*10+a%10;
		a=a/10;	
	}
	return r;
}

int main()
{
	int test,num1,num2,sum;
	scanf("%d",&test);
	while(test--)
	{
		sum=0;
		scanf("%d%d",&num1,&num2);
		sum=rev(num1)+ rev(num2);
		printf("%d\n",rev(sum));	
	}

return 0;
}
