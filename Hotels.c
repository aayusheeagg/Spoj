//Hotels

#include<stdio.h>

int main()
{
	int i,m,n,a[300005],j=0;
	long int sum=0,now=0,temp;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		if(now+a[i]<m)
			now=now+a[i];
		else if(now+a[i]==m)
		{
			now=now+a[i];
			sum=now;
			break;
		}
		else
		{
			temp=now;
			while((temp+a[i])>m)
			{
				now=now-a[j];
				temp=now;
				if(now+a[i]<m)
					now=now+a[i];
				else if(now+a[i]==m)
				{
					now=now+a[i];
					sum=now;
					break;
				}
				j++;
			}
			
		}
		sum=(sum>now)?sum:now;
	}
	printf("%d",sum);
	return 0;
}
