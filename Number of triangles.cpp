#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,a,b,i,j,x,y,t,sum;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&n,&a,&b);

        if(a>b)
        {
            x = a;
            a = b;
            b = x;
        }
        sum  = 0;


            x = b-a-1;
            y = n-b+a-1;

           a = x-1;

            if(a>0)
            {
                sum += (a*(a-2))+1;
            }
            b = y-1;
            if(b>0)
            {
                sum += (b*(b-2))+1;
            }

            if(x-1>0)
            {
                sum+=(x-1)*y;
            }
            if(y-1>0)
            {
                sum+=(y-1)*x;
            }

            printf("%lld\n",sum);







    }







return 0;
}
