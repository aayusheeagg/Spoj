//New type of sieve

#include<stdio.h>

int main()
{
	long int test,a,n;
	scanf("%ld",&test);
	while(test--)
	{
		scanf("%d",&n);
		a=(n%2==0)?n/2:n/2+1;
		printf("%d\n",a);
	}
}
