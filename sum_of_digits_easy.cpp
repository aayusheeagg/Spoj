#include<iostream>
#include<cmath>
using namespace std;
/*long int sumOfDigits(long int x)
{
    long int sum = 0;
    while (x != 0)
    {
        sum += x %10;
        x   = x /10;
    }
    return sum;
}
long int sum(long int n)
{
    long int result = 0;
    for (long int x=1; x<=n; x++)
        result += sumOfDigits(x); 
    return result;
}
*/

long long sum(long long N)
{
if(N/10==0) return N*(N+1)/2;
int i=0;
long long n=N;
while(n/10!=0){
i++;
n/=10;
}
     int p=pow(10,i);
     return ((n*45*i*p/10)+ n*(n-1)*p/2+ n*(N%p+1) + sum(N%p));
}
int main()
{
long long a,b;
cin>>a>>b;
while(a!=-1 || b!=-1)
{
cout<<sum(b)-sum(a-1)<<endl;
cin>>a>>b;
}
return 0;
}


/*
one important thing is the sum of 1+2+3+.........+9=45
2.now u have to find out that how many times this sum(45) will occur......
3.example::
      let u want to find out sum of digits of 1 to 52.
      then just notice how i m reaching to 92.
     i.e 1,2,3..........9
         11,12,13,...........19
         21,22,23,,,,,,,,,,,,,,,,29
         31,32,,,,,,,,,,,,,,,,,,,,,,39
         41,42,,,,,,,,,,,,,,,,,,,,,49
         10,20,30,40,50
         51,52
        
         just think how i m making sets....
        1. now observe how many sum(1+2+3+......+9=45)  occuring
         5 times sum(45) occuring
         
        2.10times 1,10 times 2,10 times 3,10 times 4
           so i can write this sum as (1+2+3+4) *10 times
                                                 formula for this=4*5*10/2
    
        3.for 50,51 ,52 i.e how many times 5 occuring...
           i.e 3 times i can write this as 5*(2+1) or 5*(52%10+1)
        
         4.now for 0+1+2=2*3/2

so finally formula for this is
n*45*i*p/10)+ n*(n-1)*p/2+ n*(N%p+1) + sum(N%p) where p=10 to power i where i is digit(n)-1

*/

