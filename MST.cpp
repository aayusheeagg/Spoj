// ( w , (u, v) ) format
// union rank

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define edge pair< int, int >
#define MAX 10001

vector< pair< int, edge > > GRAPH, MST;
int parent[MAX], N, E,rank[MAX];
long long total;

int findset(int x)
{
    if(x != parent[x])
        parent[x] = findset(parent[x]);
    return parent[x];
}

void kruskal()
{
    int i, pu, pv;
    sort(GRAPH.begin(), GRAPH.end()); // increasing weight
    for(i=total=0; i<E; i++)
    {
        pu = findset(GRAPH[i].second.first);
        pv = findset(GRAPH[i].second.second);
		//Union(u,v)
		if(pu!=pv)
		{
			if(rank[pu]<rank[pv])						// Attach smaller rank tree under root of high rank tree
				parent[pu]=pv;
			else if(rank[pu]>rank[pv])
				parent[pv]=pu;
			else										// if ranks are same, then make one as root and increment its rank by one
			{
				parent[pv]=pu;
				rank[pu]++;
			}
			MST.push_back(GRAPH[i]); // add to tree
			total =total+ (long long) GRAPH[i].first; // add edge cost
		}
	}
}

void reset()
{
    // reset appropriate variables here
    // like MST.clear(), GRAPH.clear(); etc etc.
    for(int i=1; i<=N; i++)
	{
		rank[i]=1;
		parent[i] = i;
	}
}

void print()
{
    int i, sz;
    // this is just style...
    sz = MST.size();
    for(i=0; i<sz; i++)
    {
        printf("( %d", MST[i].second.first);
        printf(", %d )", MST[i].second.second);
        printf(": %d\n", MST[i].first);
    }
    printf("Minimum cost: %d\n", total);
}

int main()
{
    int i, u, v, w;
    scanf("%d %d", &N, &E);
    reset();
    for(i=0; i<E; i++)
    {
        scanf("%d %d %d", &u, &v, &w);
        GRAPH.push_back(make_pair(w, make_pair(u, v)));
    }
    kruskal(); // runs kruskal and construct MST vector
   // print(); // prints MST edges and weights
	printf("%lld\n",total);
    return 0;
}
