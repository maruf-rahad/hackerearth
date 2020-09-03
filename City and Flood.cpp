#include<bits/stdc++.h>
using namespace std;
int parent[100005];
void makeset(int n)
{
    for(int i = 1 ; i<= n ; i++)
    {
        parent[i] = i;
    }
}
int find_parent(int a)
{
    if(a==parent[a])
    {
        return a;
    }

    parent[a] = find_parent(parent[a]);

    return parent[a];
}
int main()
{

    int n,m,a,b,i,j,x,y;

    scanf("%d %d",&n,&m);
    makeset(n);
    for(i=1;i<=m;i++)
    {
        scanf("%d %d",&a,&b);
        x = find_parent(a);
        y = find_parent(b);

        if(x!=y)
        {
            parent[y] = x;
        }
    }
    int sum = 0;
    for(i=1;i<=n;i++)
    {
        if(i==find_parent(i))
        {
            sum++;
        }
    }

    printf("%d\n",sum);































return 0;
}
