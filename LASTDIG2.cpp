//Last digit of power when base can be of 1000 digits

#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	char str[1002];
	int test,a,len,ans,r;
	unsigned long long int b;
	cin>>test;
	while(test--)
	{
		cin>>str;
		cin>>b;
		len=strlen(str);
		a=str[len-1]-'0'; //cout<<"a="<<a;
		r=b%4; //cout<<"r="<<r<<endl;
		if(b==0 && a!=0) ans=1; 
		else{
		if(a==0) { ans=0; goto end;}
		if(a==5) {ans=5; goto end;}
		switch(r){
			case 0: ans=a%2!=0? 1:6;
			break;
			case 1: ans=a;
			break;
			case 2: ans=a*a%10;
			break;
			default : ans=a*a*a%10;
			break; 
		}
		}
		end :
		cout<<ans<<endl;	
	}
	return 0;
}

