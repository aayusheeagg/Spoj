#include<stdio.h>
#include<math.h>
int arr[1000005]={1,1,0};		//prime has zero 
int prime[1000000];			//array of prime numbers store 2 3 5 7....

int main()
{
int test,index=0,i,j,m,n;
long long sum[1000005]={0,0};
for(i=2;i<=1000;i++)
{
	if(arr[i]==0)
	{
		for(j=i+i;j<=1000000;j+=i)
			arr[j]=1;
	}
}
for(i=2;i<=1000000;i++)
{
	if(arr[i]==0)
		prime[index++]=i;
}
for(i=2;i<=1000000;i++)
{
	if(arr[i]==0)
	sum[i]=sum[i-1]+i;
	else
	sum[i]=sum[i-1];
}
scanf("%d",&test);
while(test--)
{
	scanf("%d%d",&m,&n);
	long long diff=sum[n]-sum[m-1];
	long long k=sqrt(diff);
	if(diff>1000000)
	{
		for(i=0;prime[i]<=k+1;i++)
		{
			if(diff%prime[i]==0)
			break;
		}
		if(prime[i]>k+1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	else
	{
		if(arr[diff]==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
return 0;
}
