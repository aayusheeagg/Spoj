// longest path in a tree via dfs- to find the distance in paths via dfs

#include<iostream>
#include<vector>
using namespace std;

int check[100000]={0},total=0;
vector <int> v[100000];
int dfs(int root)
{
    int m,m1=-1,m2=-1;
    check[root]=1;
    for(int i=0;i<v[root].size();i++)
    {
    	int z=v[root][i];
        if(!check[z])
		{
            m = dfs(z);		//return level
            if(m>=m1)
            {
                m2= m1;
                m1 = m;
            }
            else if(m>m2)
                m2=m;
        }
    }
    total = max(total , m1+m2+2);
    return (m1 + 1);
}

int main()
{
	int s,d,n,e;
	cin>>n;
	for(int i=1;i<=n-1;i++)
	{
		cin>>s>>d;
		v[s].push_back(d);
		v[d].push_back(s);
	}
	dfs(1);
	cout<<total<<endl;
	return 0;	
}
