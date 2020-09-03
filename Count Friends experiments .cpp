#include<bits/stdc++.h>
using namespace std;
int ara[100005];
int cnt[100005];
int n,m;
void makeset()
{
    for(int i = 1 ; i <= n ; i++)
    {
        ara[i] = i;
        cnt[i] = 0;
    }
}

int find_parent(int a)
{
    if(ara[a] == a)
    {
        return a;
    }

    ara[a] = find_parent(ara[a]);
    return ara[a];

}
int main()
{

    int t,i,j,x,y,a,b;

    scanf("%d %d",&n,&m);

    makeset();

    for(i=1; i<=m; i++)
    {
        scanf("%d %d",&a,&b);
        x = find_parent(a);
        y = find_parent(b);
        if(x!=y)
        {
            ara[y] = x;
            cnt[x] = cnt[x]+cnt[y] + 1;

        }
    }
    int flag = 0;
    for(i=1;i<=n;i++)
    {
        if(flag==0)
        {
        printf("%d",cnt[find_parent(i)]);
        flag = 1;
        }
        else
        {
            printf(" %d",cnt[find_parent(i)]);
        }
    }
    printf("\n");







    return 0;
}
