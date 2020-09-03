#include<bits/stdc++.h>
using namespace std;
long long ara[100005];
long long cnt[100005];

void makeset(long long n)
{
    for(int i=1;i<=n;i++)
    {
        ara[i] = i;
        cnt[i] = 1;
    }

}

long long find_parent(long long a)
{
    if(ara[a]==a)
    {
        return a;
    }

    ara[a] = find_parent(ara[a]);

    return ara[a];
}
int main()
{
    long long n,m,i,j,a,b,x,y;
    scanf("%lld %lld",&n,&m);
    makeset(n);
    for(i=1;i<=m;i++)
    {
        scanf("%lld %lld",&a,&b);

        x = find_parent(a);
        y = find_parent(b);

        if(x!=y)
        {
            ara[y] = x;
            cnt[x] +=cnt[y];
        }

    }

    long long sum = 1;
    for(i=1;i<=n;i++)
    {
        if(ara[i]==i)
        {
            sum = (sum*cnt[i])%1000000007;
        }
    }
    printf("%lld\n",sum);


























return 0;
}
