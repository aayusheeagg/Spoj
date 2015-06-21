//PRIME ASCII string
#include<stdio.h>
#include<math.h>
#include<string.h>

int prime(int num)
{
	int i,n=sqrt(num);
	for(i=2;i<n;i++)
	{
		if(num%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int len,count,test,i;
	char str[100001];
	scanf("%d",&test);
	test++;
	while(test--)
	{
		count=0;
		gets(str);
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			if(!prime(toascii(str[i])))
				printf("%c",str[i]);
			else
				count++;
			if(count==len)
				printf("NULL");
		}
		printf("\n");
	}
	return 0;	
}
