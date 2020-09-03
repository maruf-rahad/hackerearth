#include<bits/stdc++.h>
using namespace std;
int ara[15][15];
int n,flag;
void zero()
{
    for(int i = 0;i<=n+1;i++)
    {
        for(int j = 0;j<=n+2;j++)
        {
            ara[i][j] = 0;
        }
    }
}

void bingo()
{
    int i,j,sum = 0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(ara[i][j]==1)
            {
                sum++;
                if(sum==n)
                {
                    flag = 1;
                    for(int x= 1;x<=n;x++)
                    {
                        for(int y = 1;y<=n;y++)
                        {
                            printf("%d ",ara[x][y]);
                        }
                        printf("\n");
                    }
                    break;
                }
            }
        }
        if(flag==1)break;
    }
}
bool check(int a,int b)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        if(ara[a][i]==1)
        {
           // printf("%d %d row problem\n",a,b);
            return false;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(ara[i][b]==1)
        {
            //printf("%d %d column problem\n",a,b);
            return false;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          if(ara[i][j]== 1 && abs(a-i)==abs(b-j))
          {
             // printf("%d %d boro kona problem\n",a,b);
                return false;
          }

        }
    }
    return true;
}

void queen()
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(check(i,j))
            {
                //printf("boshaichi %d %d\n",i,j);
                ara[i][j] = 1;
                bingo();
                if(flag==1)break;
                queen();
                ara[i][j] = 0;
              //  printf("chaira disi %d %d\n",i,j);
            }
        }
        if(flag==1)break;
    }

}

int main()
{
    int i,j;
    while(scanf("%d",&n)==1)
    {
        zero();
        flag = 0;
        queen();
        if(flag==0)
        {
            printf("Not possible\n");
        }

    }







return 0;
}
