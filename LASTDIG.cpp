//Last digit of power

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int test,a,r;
	unsigned long int b;
	cin>>test;
	while(test--)
	{
		cin>>a>>b;
		a=a%10;
		r=b%4;
		if(a==0)
			cout<<0<<endl;
		else if(r==0 && b!=0)
			cout<<(int)pow(a,4)%10<<endl;
		else
			cout<<(int)pow(a,r)%10<<endl;		
	}
	return 0;
}

