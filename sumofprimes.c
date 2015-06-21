#include<stdio.h>
#include<math.h>
int numbers[300],len=0;
int process(unsigned int x)
{
    unsigned int i, last = sqrt(x);
    for (i = 0; i<len && numbers[i]<=last; i++)
    {
        if (x % numbers[i]==0) 
            return 0; 
    }
    return 1;
}
int main()
{
    int test,i,j,isprime[992];
    unsigned int beg,end;
    for(i=2;i<=992;i++) isprime[i]=1;
    for(i=2;i*i<992;i++)
	{
	 	if(isprime[i])
     	{
         for(j=2*i;j<=992;j=j+i)
		 	isprime[j]=0;        
    	}
	}	
	for (i = 2; i< 992; i++)
    {    	    	
        if (isprime[i])
            numbers[len++] = i;
    }
    scanf("%d",&test);
    while (test--)
    {
    	unsigned int sum=0;
        scanf("%d%d",&beg,&end);
        if (beg == 1)
       		beg++;
        while (beg<=end)
        {
            if (process(beg))
                sum+=beg;
            beg++;
        }
        if(process(sum))
        	printf("YES\n");
        else
        	printf("NO\n");
    }
    return 0;
}


