#include<bits/stdc++.h>
using namespace std;
vector<int>G[100005];
int visited[100005];
int cnt[100005];
int cost[100005];

int total = 0;

void zero(int n)
{
    for(int i=1;i<=n+1;i++)
    {
        G[i].clear();
        visited[i] = 0;
        cnt[i] = 0;
    }
}

void bfs(int u)
{
    visited[u] = 1;
    cnt[u] = 0;
    queue<int>q;
    q.push(u);

    while(!q.empty())
    {
        int u = q.front();

        q.pop();

        visited[u] = 1;
        int sum = 0;
        for(int i=0;i<G[u].size();i++)
        {
            int v = G[u][i];

            if(visited[v]==0)
            {
             sum++;
            cnt[v] = cnt[u]^cost[v];

            q.push(v);

            }
        }
        if(sum==0)
        {
            if(cnt[u]%2==1)
            {
                total++;
            }
        }
    }

}
int main()
{
    int n,m,i,j,x,y,t,a,b,c;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        zero(n);

        for(i=1;i<n;i++)
        {
            scanf("%d %d %d",&a,&b,&c);

            cost[b] = c;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        total = 0;
        bfs(1);

        printf("%d\n",total);

    }










return 0;
}
