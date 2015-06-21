#include <bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;
int prime[10009];
void sieve()		//for calculating all primes upto 4 digits
{
    memset(prime,0,sizeof(prime));
    for(int i=2;i<=100;i++)
        if(!prime[i])
        {
            for(int j=i*i;j<=10000;j+=i)
                prime[j] = 1;
        }
}

int main()
{
    int t;
    cin>>t;
    sieve();
    while(t--)
    {
        int temp,ash,dist[10009],a,b,flag=0,visited[10009];
	char digit[4];
        cin>>a>>b;
	ash=b;
	memset(visited,0,sizeof(visited));
	memset(dist,-1,sizeof(dist));	
        queue<int> q;
	while(!q.empty())
   		 q.pop();
        dist[a]=0;
        q.push(a);
       	visited[a]=1;
        while(!q.empty())
        {
            int num = q.front();			//second level
	    if(num==b) break;
	    q.pop();
            for(int k=3;k>=0;k--)			//one level primes pushed into queue
            {
		sprintf(digit,"%d",num);		//number to char array
                for(int i=0;i<=9;i++)		
                {
		    digit[k]=i+'0';		//character array + 45
                    temp=atoi(digit);
		    if((!prime[temp]) && !visited[temp] && temp>=1000)
                    {
			visited[temp]=1;
                        dist[temp]= dist[num] + 1;		//level no.
                        q.push(temp);
			if(temp==b) {flag=1;break;}
                    }
                }if(flag) break;	
            }
        }
        dist[ash]==-1 ? cout<<"Impossible"<<endl : cout<<dist[ash]<<endl;
    }
    return 0;
}
