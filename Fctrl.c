
#include<stdio.h>

int main()
{
int test;
unsigned long n,zero;
scanf("%d",&test);
while(test--)
{
zero=0;
scanf("%lu",&n);
while(n>0)
{
	n=n/5;
	zero+=n;
}
printf("%lu\n",zero);
}
return 0;
}
