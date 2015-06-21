#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
int t,i,n,a[1001],b[1001],sum;
scanf("%d",&t);
while(t--)
{
	sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	sort(a,a+n);
	sort(b,b+n);
	for(i=0;i<n;i++)
		sum+=(a[i]*b[i]);
	printf("%d\n",sum);
	
}
return 0;
}
