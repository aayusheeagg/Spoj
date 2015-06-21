#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
int test,a[1001],n,total,k,no,money;
scanf("%d",&test);
for(int j=1;j<=test;j++)
{
	int sum=0,no=0;	
	scanf("%d%d",&money,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("Scenario #%d:\n",j);
	if(sum<money)
		printf("impossible\n");
	else
	{
	sort(a,a+n);
	total=money;	
	k=n-1;
	while(total>0 && k>=0)
	{
		total=total-a[k];
		no++; k--;
	}
	printf("%d\n",no);
	}
printf("\n");
}
return 0;
}
