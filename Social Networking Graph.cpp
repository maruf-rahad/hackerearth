#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
queue<int>q;
int n;
int level[120];
void bfs(int x)
{
    int i,b,a;
    q.push(x);
    level[x] = 0;
    while(!q.empty())
    {
        a = q.front();

        q.pop();
        for(i=0; i<v[a].size(); i++)
        {

            b = v[a][i];

            if(level[b]==5555555)
            {
                level[b] = level[a]+1;
                q.push(b);
            }
        }
    }
}


int main()
{
    int n,m,i,j,a,b,y,c,d;

    scanf("%d %d",&n,&m);


        for(i=1; i<=m; i++)
        {

            scanf("%d %d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);

        }

        scanf("%d",&y);
        for(i=1; i<=y; i++)
        {
            scanf("%d %d",&c,&d);
            for(j=0; j<=n; j++)
            {
                level[j]=5555555;
            }
            bfs(c);
            int sum = 0;
            for(j=1; j<=n; j++)
            {
                if(level[j]==d)
                {
                    sum++;

                }
            }
            printf("%d\n",sum);


        }








    return 0;
}


