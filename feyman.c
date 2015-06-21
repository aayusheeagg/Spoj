// Diff. squares in a grid of n

#include<stdio.h>
int main()
{
	int n;
	while(1)
	{
		int total=0;
		scanf("%d",&n);
		if(n==0)
			break;
		while(n>=1)
		{
			total+=n*n;
			n--;
		}
		printf("%d\n",total);
	}
	return 0;
	
}
