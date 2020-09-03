#include<bits/stdc++.h>
using namespace std;
int n,m;
int ara[100005];
int cnt[100005];
map<int,int>mp;
map<int,int> ::  iterator it;
vector<int>v;
void sett(int n)
{
    for(int i = 1; i <= n ; i++)
    {
        ara[i] = i;
        cnt[i] = 1;
    }
}

int findd(int a)
{
    if(a==ara[a])
        return a;


    ara[a] = findd(ara[a]);

    return ara[a];

}
int main()
{

    int i,a,b,x,y,j;

    scanf("%d %d",&n,&m);
    sett(n);
    for(i=1; i<=m; i++)
    {
        scanf("%d %d",&a,&b);
        x = findd(a);
        y = findd(b);
        if(x!=y)
        {
            ara[y] = x;
            cnt[x] += cnt[y];
        }
    }
    int flag = 0;
    for(i=1;i<=n;i++)
    {
        if(flag==0)
        {
            printf("%d",cnt[findd(i)]-1);
            flag = 1;
        }
        else{
            printf(" %d",cnt[findd(i)]-1);
        }

    }
     printf("\n");










    return 0;
}
