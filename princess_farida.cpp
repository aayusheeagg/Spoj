#include<iostream>
#include<cstdio>
using namespace std;
long long int dp[10001],a[10001];
int n;
long long int max(long long int a,long long int b)
{
 if(a>=b) return a;
 else return b;
}

long long int fun(int index)
{
	if(index>=n)
		return 0;
	if(index==n-1)
		return a[index];
	if(dp[index]!=-1)
		return dp[index];
	dp[index]=max(fun(index+1) , a[index]+fun(index+2));
	return dp[index];
}
int main()
{
int test,j=1;
scanf("%d",&test);
while(j<=test)
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%lld",&a[i]);
	
	for(int i=0;i<10001;i++)
		dp[i]=-1;
		
	printf("case %d: %lld\n",j,fun(0));
	j++;
}
return 0;
}
