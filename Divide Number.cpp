#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>v;


int main()
{

    long long t,i,l;
    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);

    v.clear();
    l = sqrt(n);
    for(i=1;i<=l;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i!=n/i)
            {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());

    for(i=0;i<v.size();i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");

    }






return 0;
}
