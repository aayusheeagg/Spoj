#include<stdio.h>
int main()
{
	int count1,count2,t,i,j,ng,nm;
	scanf("%d",&t);
	while(t--)
	{		
		printf("\n");
		scanf("%d%d",&ng,&nm);
		int arr1[ng],arr2[nm];
		count1=0;count2=0;
		for(i=0;i<ng;i++)
		{			
			scanf("%d",&arr1[i]);
			if(count1<arr1[i])
				count1=arr1[i];
		}
		for(j=0;j<nm;j++)
		{
			scanf("%d",&arr2[i]);
			if(count2<arr2[i])
				count2=arr2[i];
		}
		if(count1>=count2)
		printf("Godzilla\n");
		else if(count1<count2)
		printf("MechaGodzilla\n");
		else
		printf("uncertain\n");
	}
	return 0;
}

