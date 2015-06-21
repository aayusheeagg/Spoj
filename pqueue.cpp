//PQUEUE
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
int num,pos,test,sorted[1000];
queue < int > myp,mye;
cin>>test;
while(test--)
{
	cin>>num>>pos;
	int time=0;
	while(!myp.empty()) myp.pop();
	while(!mye.empty()) mye.pop();
	for(int i=0;i<num;i++)
	{	cin>>sorted[i];
		myp.push(i);
		mye.push(sorted[i]);
	}
	sort(sorted,sorted+num);
	for(int i=num-1;i>=0;i--)
	{
		while(mye.front()<sorted[i])
		{
			myp.push(myp.front());
			myp.pop();
			mye.push(mye.front());
			mye.pop();
		}
		if(myp.front()==pos)
		{ time++; cout<<time<<endl; break;}		
		myp.pop();
		mye.pop();
		time++;
	}
}
return 0;
}
