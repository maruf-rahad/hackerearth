#include<bits/stdc++.h>
using namespace std;
int parent[100005];
void makeset(int n)
{
    for(int i = 1 ; i <= n ;i++)
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
    int n,m,i,j,x,y,t,a,b;

    scanf("%d %d",&n,&m);
    makeset(n);
    for(i=1;i<=m;i++)
    {
        scanf("%d %d",&a,&b);

        x = find_parent(a);
        y = find_parent(b);

        if(x>=y)
        {
            parent[y] = x;
        }
        else
        {
            parent[x] = y;
        }
    }

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);

        x = find_parent(a);
        y = find_parent(b);

        if(x==y)
        {
            printf("TIE\n");
        }
        else if(x>y)
        {
            printf("%d\n",a);
        }
        else{
            printf("%d\n",b);
        }
    }















































return 0;
}
