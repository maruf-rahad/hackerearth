#include<bits/stdc++.h>
using namespace std;
int ara[15][15];
int r[8] = {2,2,-2,-2,1,-1,1,-1};
int c[8] = {1,-1,1,-1,2,2,-2,-2};
int n,m,x;

void zero()
{
    for(int i = 0 ;i <= 12;i++)
    {
        for(int j=0;j<=12;j++)
        {
            ara[i][j] = 0;
        }
    }
}
void backtrack(int a,int b,int sum)
{
    sum++;
    if(sum>x)return;
    int i,j;
   // printf("getting %d %d\n",a,b);
    for(i = 0;i<8;i++)
    {
        int xx = a+r[i];
        int yy = b+c[i];
        if(xx<=10&&xx>=1&&yy<=10&&yy>=1)
        {
            if(sum==x)
           // printf("going %d %d    sum = %d\n",xx,yy,sum);
            ara[xx][yy] = sum;

            backtrack(xx,yy,sum);
        }
    }
}

int main()
{
    int i,j,a,y;

    while(scanf("%d %d %d",&n,&m,&x)==3)
    {
        zero();

        backtrack(n,m,0);
        y = 0;
        for(i=1;i<=10;i++)
        {
            for(j=1;j<=10;j++)
            {
                if(ara[i][j]==x)
                    y++;
            }

        }

        printf("%d\n",y);

    }







return 0;
}
