//Transform the expression

#include<stdio.h>
int main()
{
	int t,i,ind,j;
	char s[400],out[400];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%s",s);
		ind=-1;
		for(j=0;s[j]!='\0';j++)
		{
			if(s[j]=='(')
				out[++ind]=s[j];
			else if(s[j]==')'){
				while(out[ind]!='(')
					printf("%c",out[ind--]);ind--;}
			else if(s[j]=='/'||s[j]=='*'||s[j]=='^')
			{
				if(ind!=-1 && (out[ind]=='/'||out[ind]=='*'||out[ind]=='^'))
					printf("%c",out[ind--]);
				out[++ind]=s[j];
			}
			else if(s[j]=='+'||s[j]=='-')
			{
				while(out[ind]!='(' && ind!=-1)
					printf("%c",out[ind--]);
				out[++ind]=s[j]; 
			}
			else
				printf("%c",s[j]);
		}
		while(ind>=0)
			printf("%c",out[ind]);
		printf("\n");
	}
	return 0;
}
