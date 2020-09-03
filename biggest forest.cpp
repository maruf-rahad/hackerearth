#include<bits/stdc++.h>
using namespace std;
int visited[1005][1005];
char ch[1005][1005];
int sum,n;

int r[4] = {1,-1,0,0};
int c[4] = {0,0,1,-1};

void dfs(int x,int y)
{
    int i,j;
    sum++;
    visited[x][y] = 1;

    for(i = 0;i<4;i++)
    {
        int xx = x+r[i];
        int yy = y+c[i];

        if(xx>0&&xx<=n&&yy>0&&yy<=n&&visited[xx][yy] == 0&&ch[xx][yy]=='T')
        {
            dfs(xx,yy);
        }
    }



}
int main()
{
    int i,j;

    scanf("%d",&n);
    getchar();

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%c",&ch[i][j]);
        }
        getchar();
    }
    int mx = 0;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(visited[i][j]==0&&ch[i][j]=='T')
            {
                sum = 0;
                dfs(i,j);
                mx = max(sum,mx);
            }
        }
    }

    printf("%d\n",mx);







































return 0;
}
