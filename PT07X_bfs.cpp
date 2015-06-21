//longest path in a tree, first apply bfs on any node(root) find maximum of distances then again apply bfs from that node to again find maximum.

#include<cstdio>
#include<vector>
#include<utility>
#include<queue>
#include<bits/stdc++.h> //for memset
using namespace std;
int visited[10005]={0},weight[10005]={0};
vector< int > v[10005];	
void bfs(int s)
{
	queue< pair<int,int> > q;
	q.push(make_pair(s,0));
	visited[s]=1;
	while(!q.empty())
	{
		int x=q.front().first;
		int level=q.front().second;
		q.pop();
		for(int i=0;i<v[x].size();i++)
		{
			int z=v[x][i];
			if(!visited[z])
			{
				visited[z]=1;
				q.push(make_pair(z,level+1));
			}
		}
		weight[x]=level;
	}
	return ;
}
int main()
{
	int s,d,n,e;
	scanf("%d",&n);
	for(int i=1;i<=n-1;i++)
	{
		scanf("%d%d",&s,&d);
		v[s].push_back(d);
		v[d].push_back(s);
	}
	bfs(1);
	int maximum=1;
	for(int i=2;i<=n;i++)
	maximum = (weight[maximum]>weight[i])?maximum:i;
	memset(weight, 0, sizeof(weight));
    memset(visited, 0, sizeof(visited));
    bfs(maximum);
    maximum = 1;
    for(int i = 2; i<= n; i++)
        maximum = (weight[maximum]>weight[i])?maximum:i;
    printf("%d\n",weight[maximum]);
	return 0;
}
