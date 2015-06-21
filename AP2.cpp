#include<iostream>
using namespace std;

int main()
{
	int test;
	unsigned long long int a,b,c,i,j,n,d,m;
	cin>>test;
	while(test--){
		cin>>a>>b>>c;
		n=(c*2)/(a+b);
  	 	d=(b-a)/(n-5);
  		m=a-2*d;
  		cout<<n<<endl;
  		for(i=0;i<n;i++)
		   cout<<(m+i*d)<<" ";
		cout<<endl;
  	}
  	return 0;
}
