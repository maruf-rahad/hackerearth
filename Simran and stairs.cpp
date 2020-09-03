#include<bits/stdc++.h>
using namespace std;
int n;
int x;


void recur(int sum)
{
    if(sum==n){
        x++;
    }
    else if(sum!=0&&(abs(n-sum))%3==0)
    {
        x+=2;
    }
    else if(sum>n)return;

    if(sum+1<=n)
    {
        recur(sum+1);
    }
    if(sum+2<=n)
    {
        recur(sum+2);
    }


}
int main()
{
    scanf("%d",&n);
        x = 0;
        if(n%3==0)x++;
        recur(0);
        printf("%d\n",x);
}
