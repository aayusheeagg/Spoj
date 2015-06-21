//0-1 Knapsack problem

#include<stdio.h>
#include<stdlib.h>

void knapsack(int *w,int *b,int n,int m)
{
	int i,j,Ben[n][m+1];
	for(i=0;i<n;i++)
			Ben[i][0]=0;
	for(j=0;j<=m;j++)
			Ben[0][j]=0;
	for(i=1;i<n;i++)
		for(j=1;j<=m;j++)
		{
			if(w[i]>j)
				Ben[i][j]= Ben[i-1][j];
			else
				Ben[i][j]= (Ben[i-1][j]>b[i]+Ben[i-1][j-w[i]]) ? Ben[i-1][j] : b[i]+Ben[i-1][j-w[i]];
		}
	printf("%d\n",Ben[n-1][m]);
}

int main()
{
	int n,i,m;
	scanf("%d%d",&m,&n);
	int *w=(int *)malloc((n+1)*sizeof(int));
	int *b=(int *)malloc((n+1)*sizeof(int));
	w[0]=0;b[0]=0;
	for(i=1;i<=n;i++)
		scanf("%d%d",&w[i],&b[i]);
	knapsack(w,b,n+1,m);
return 0;
}

