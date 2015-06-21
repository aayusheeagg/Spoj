//Factorial of a number upto 100 note that 100!=153 digits so use by array

#include<stdio.h>
int main()
{
    int test,num,i,j,arr[160];
    scanf("%d",&test);
    while(test--)
    {
        int k=0,carry=0;
        scanf("%d",&num);
		arr[0]=1;
        for(i=1;i<=num;i++)
        {
            for(j=0;j<=k;j++)
             {
                arr[j]=arr[j]*i+carry;
                carry=arr[j]/10;
                arr[j]=arr[j]%10;
             }
             while(carry)
             {
                 arr[++k]=carry%10;
                 carry/=10;
             }
         }
         for(i=k;i>=0;i--)
            printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}
