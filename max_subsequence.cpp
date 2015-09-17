//Maximum value contiguous subsequence and how many times occuring _ dp

#include<iostream>
#include<climits>
#include<cstdio>
using namespace std;

int main()
{
int n,test;
scanf("%d",&test);
while(test--)
{	
	scanf("%d",&n);
	int M[n],a[n];
	long long count[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	if(n==1){
		printf("%d %d\n",a[0],1);
		continue;
	}
	M[0]=a[0];
	count[0]=1;
	int max=INT_MIN;
	for(int i=1;i<n;i++)
	{
		int temp=M[i-1]+a[i];	
		if(temp>a[i])
		{
			M[i]=temp;
			count[i]=count[i-1];
		}
		else if(temp<a[i])
		{	M[i]=a[i];
			count[i]=1;
		}
		else if(temp==a[i])
		{	M[i]=temp;	
			count[i]=count[i-1]+1;
		}
		if(M[i]>max)  max=M[i];
	}
	
	long long int cnt=0;
	for(int i=0;i<n;i++)
		if(M[i]==max)
			cnt+=count[i];	
	printf("%d %lld\n",max,cnt);
}
return 0;
}
