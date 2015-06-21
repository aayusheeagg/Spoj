//Regularity of girls and boys

#include<stdio.h>
int main()
{
	int a,b,ans,e,f,max,min;
	scanf("%d%d",&a,&b);
	while(a!=-1 && b!=-1)
	{
		max=(a>b)?a:b;
		min=(a>b)?b:a;
		e=max/(min+1);
        f=max%(min+1);
        if(f==0) ans=e;
        else ans=e+1;                
        printf("%d\n",ans); 
		scanf("%d%d",&a,&b);
	}
	return 0;
}
