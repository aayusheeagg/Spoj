#include<stdio.h>
#include<math.h>
int numbers[3500], len=0;
int prime(int x)
{
    int i,k=sqrt(x);
    for (i=2;i<=k;i++)
    {
        if (x%i==0)
            return 0;
    }
    return 1;
}
int process(unsigned long x)
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
    int test,i;
    unsigned long beg,end;
    for (i = 2; i < 32000; i++)
    {
        if (prime(i))
            numbers[len++] = i;
    }
    scanf("%d",&test);
    while (test--)
    {
        scanf("%lu%lu",&beg,&end);
        if (beg == 1)
       		beg++;
        while (beg<=end)
        {
            if (process(beg))
                printf("%lu\n",beg);
            beg++;
        }
        printf("\n");
    }
    return 0;
}


