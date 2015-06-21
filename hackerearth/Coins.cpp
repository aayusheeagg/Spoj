//exchange coins bytelandian gold coins -DP

#include<iostream>
#include<map>
#include<cstdio>
#include<algorithm>

using namespace std;

map <int,long long int> A;
long long aux=0;

long long int maxi(int m)
{
	if(m==0) return 0;
	if(A[m]!=0) return A[m];
	aux= maxi(m/2)+ maxi(m/3)+ maxi(m/4);
	if(m>aux) A[m]=m;
	else A[m]=aux;
	return A[m];
}

int main()
{
	int n;
	while(scanf("%d",&n)==1)
		printf("%lld\n",maxi(n));
	return 0;
}
