#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;

    ll n,m,ans,t,mod,i;

    cin>>t;

    while(t--)
    {
        cin>>s;

        if(s.size()==1 &&s[0]=='1'){
            printf("6\n");
            continue;
        }
        mod = 0;
        for(i=0;i<s.size();i++)
        {
            mod = ((mod*10)%5 + s[i]-'0') % 5;
        }

        if(mod == 0)printf("76\n");
        else if(mod == 1)printf("56\n");
        else if(mod == 2)printf("36\n");
        else if(mod == 3)printf("16\n");
        else if(mod == 4)printf("96\n");


    }

    return 0;
}
