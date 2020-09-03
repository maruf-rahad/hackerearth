#include<bits/stdc++.h>
using namespace std;
int n,m,t,c;
vector<int>G[1005];
int visited[1005];
int path[1005];
int level[1005];
int cost[1005];
void zero(int n)
{
    for(int i = 0; i<= n+1 ; i++)
    {
        G[i].clear();
        visited[i] = 0;
        path[i] = 0;
        level[i] = 0;
        cost[i] = 99999999;
    }
}

void bfs(int x,int y)
{

    priority_queue< pair<int, int> >pq;

    pq.push({-0,-x});
    visited[x] = 1;
    path[x] = 0;
    level[x] = 1;
    cost[x] = 0;

    while(!pq.empty())
    {
        int u = -pq.top().second;
        int w = -pq.top().first;
        // printf("u = %d\ncost u %d\n",u,cost[u]);
        if(u==y)return ;



        pq.pop();

        for(int i = 0; i<G[u].size(); i++)
        {
            int v = G[u][i];
            //if(v==y)return ;

            int a,b;

            if(w%t==0)
            {
                a = 0;
            }
            else
            {
                a = t-cost[u]%t;
            }

            b = w+a+c;

            // printf("a = %d b = %d\n",a,b);

            if(b<=cost[v]&&(path[v]==0||path[v]>u))
            {
                // printf("v = %d\n",v);
                cost[v] = b;
                visited[v] = 1;


                path[v] = u;

                pq.push({-cost[v],-v});
                level[v] = level[u]+1;
            }
        }

    }


}

void printpath(int y)
{
    int a = path[y];
    if(a==0)
    {
        printf("%d",y);
        return ;
    }
    printpath(a);

    printf(" %d",y);
}


int main()
{
   // freopen("input.txt","w",stdin);
    int a,b,i,j,x,y,k=0;

    while(scanf("%d %d %d %d",&n,&m,&t,&c)==4)
    {
        k++;

        zero(n);

        for(i=1; i<=m; i++)
        {
            scanf("%d %d",&a,&b);
            G[a].push_back(b);
            G[b].push_back(a);
        }
        scanf("%d %d",&x,&y);

        for(i=0;i<n+2;i++)
        {
            sort(G[i].begin(),G[i].end());
        }

        bfs(x,y);
        printf("%d\n",level[y]);
        printpath(y);

        cout<<endl;

    }










    return 0;

}
