#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<queue>

using namespace std;
int visited[20000];
struct node
{
       int data,mod;
}temp,temp2;  

void bfs(int x)
{
      queue<node> m; 
	  int curr;           
       temp.data=1;
       temp.mod=1%x; 
	   visited[temp.mod]=1;           
       m.push(temp);       
       while(!m.empty())
       {
                        temp=m.front();
                        if(temp.mod==0)
                        {                        			
                               printf("%d\n",temp.data);
                               break;
                        }                        
                        visited[temp.mod]=1;                        
                        m.pop(); 
						                       
                        curr=temp.data;  
                        temp.data=curr*10;
						temp.mod=(temp.mod * (10 % x)) % x;
						temp2.data=curr*10+1;
                		temp2.mod=(temp.mod+1) % x;           
                                             
                        if(!visited[temp.mod])
                        m.push(temp);         
						                      
                        if(!visited[temp2.mod])
                        m.push(temp2);                        
       }             
}
int main()
{
    int x,t;    
    scanf("%d",&t);    
    while(t--)
    {
    		scanf("%d",&x); 
             for(int i=0;i<=x;i++)
              visited[i]=0;                          
              bfs(x);
    }
    return 0;    
}
