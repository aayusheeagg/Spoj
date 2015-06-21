#include<stdio.h>
int main()
{
	int test,n,i;
    scanf("%d",&test);
    while(test--)
    {
    	long long sum=0,each;
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
   		{
   			scanf("%lld",&each);
   			sum+=each;
   			if(sum>=n)
   				sum=sum%n;
   		}
   		if(sum==0)
   			printf("YES\n");
   		else
   			printf("NO\n");
    }
    return 0;
}
