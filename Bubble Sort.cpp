#include<bits/stdc++.h>
using namespace std;
int ara[5555];

int main()
{

    int n,a,b,i,j,x,y;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
    }
    bool flag = true;
    x = 0;
    while(flag)
    {
        flag = false;
        x++;

        for(i=1;i<n;i++)
        {
            if(ara[i]>ara[i+1])
            {
                swap(ara[i],ara[i+1]);
                flag = true;
            }
        }
    }

    printf("%d\n",x);













return 0;
}
