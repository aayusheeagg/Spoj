#include<stdio.h>

int main()
{
int test;
long long n,k;
scanf("%d",&test);
while(test--)
{
	scanf("%lld",&n);
	k= (3*n*(n+1)) / 2 -n;
	k=k%1000007;
	printf("%lld\n",k);
}
return 0;
}
