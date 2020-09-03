#include<bits/stdc++.h>
using namespace std;
int ara[111111];
int cnt[111111];

void precal()
{
    int i,j;

    for(i=2;i<=100000;i++)
    {
        ara[i] = ara[i-1];

            if(i%2==1&&(i/2)%2==1)
            {
                cnt[i]+=cnt[i/2]+1;
                ara[i] += cnt[i/2]+1;
            }

    }
    return;
}
int main()
{

    int n,m,a,b,i,j,x,y,t;

    scanf("%d",&t);

     precal();

    while(t--)
    {
       scanf("%d",&n);

       printf("%d\n",ara[n]);

    }

return 0;
}
