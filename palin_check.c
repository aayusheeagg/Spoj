#include<stdio.h>
void main(){int test,i,j,k,m;char str[100];
for(scanf("%d",&test),m=1;m<=test;m++)
{scanf("%s",str);if(strlen(str)%2==0)k=k/2-1;else k=k/2;
for(i=0,j=strlen(str)-1;str[i]==str[j] && i<=k;i++,j--);
if(i==k+1)printf("%d\"YES\"\n",m);
else printf("%d\"NO\"\n",m);}}
