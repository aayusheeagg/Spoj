#include<stdio.h>
#include<limits.h>
int balance[3][2]={{3,2},{-5,-10},{-20,5}};
int dp[1001][1001][1001]={-1};
int fun(int h,int a,int flag)
{
	int i,ans=INT_MIN;
	if(h<0 || a<0) return 0;
	if(dp[h][a][flag]!=-1) return dp[h][a][flag];
	for(i=0;i<3;i++)
	{
	if(flag!=i)
		ans=max(ans,1+fun(h+balance[i][0], a+balance[i][1] , i));
	}
	return (dp[h][a][flag]=ans);
}
int main()
{
int test,h,a;
scanf("%d",&test);
while(test--)
{
	scanf("%d%d",&h,&a);
	printf("%d\n",fun(h,a,0));
}
return 0;
}
