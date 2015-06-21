//Is it a tree

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector <int> G[10005];
queue <int> Q;
int n,visited[10005]={0},parent[10005]={-1};

int bfs(int v)
{
		int u,z;
		Q.push(v);
		visited[v]=1;
		while(!Q.empty())
		{
			u=Q.front();
			Q.pop();
			for(int i=0;i<(G[u].size());i++)
			{
				z=G[u][i];
				if(parent[u]!=z && visited[z])
					return 0;
				else if(!visited[z])
					{
						parent[z]=u;
						visited[z]=1;
						Q.push(z);
					}
			}	
		}
	for(int i=1;i<=n;i++)
	if(!visited[i])
			return 0;
			
	return 1;	
}

int main()
{
	int e,s,d,E;
	cin>>n>>e;
	E=e;
	while(e--)
	{
		cin>>s>>d;
		G[s].push_back(d);
		G[d].push_back(s);
	}
	if(E!=n-1)
		cout<<"NO"<<endl;
	else
	{
		if(bfs(s))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;	
	}
	return 0;
}
