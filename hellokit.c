#include<stdio.h>
#include<string.h>

int main()
{
	int i, j, k , len, n, t, tmp;
	char arr[50];
	scanf("%s", arr);
	while(arr[0]!='.')
	{
		scanf("%d",&n);
		len = strlen(arr);
		for(j=0;j<len;j++)
		{
			tmp=j;
			for(k=tmp;k<len;k++)
				printf("%c", arr[k]);
			for(i=0;i<n-1;i++)
				printf("%s", arr);
			for(k=0;k<tmp;k++)
				printf("%c", arr[k]);
			printf("\n");
		}
		scanf("%s",arr);
	}
	return 0;
}
