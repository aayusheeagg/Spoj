#include<stdio.h>
int main()
{
    int t;
    long int temp,num,sum,i;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%ld",&num);
        for(i=1;;i++)
        {
            sum+=i;
            if(sum>=num)
                break;
        }
        temp=sum-num;        
        if(i%2==0)
            printf("TERM %ld IS %ld/%ld\n",num,i-temp,1+temp);
        else
            printf("TERM %ld IS %ld/%ld\n",num,1+temp,i-temp);
    }
    return 0;
}
