#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[200];
    char ch2[200];
    int i,j,k,a,b,n,m;
    while(scanf("%s %s",&ch,&ch2)==2)
    {
        n = strlen(ch);
        m = strlen(ch2);
    //    printf("%d %d\n",n,m);

        int ara[n+2][m+2];
        int flag[n+2][m+2];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                ara[i][j] = 0;
                flag[i][j] = 0;
            }
        }
        for(i=0;i<n;i++)
        {
        for(j=0;j<m;j++)
        {
            if(ch[i]==ch2[j])
            {
                ara[i+1][j+1]  =  ara[i][j]+1;
                flag[i+1][j+1] = 3;
            }
            else if(ara[i+1][j]>ara[i][j+1])
            {
                ara[i+1][j+1] = ara[i+1][j];
                flag[i+1][j+1] = 2;
            }
            else if(ara[i][j+1]>ara[i+1][j])
            {
                ara[i+1][j+1] = ara[i][j+1];
                flag[i+1][j+1] = 1;
            }
        }
        }
        i = n;
        j = m;


        vector<char>v;
               i = n;
        j = m;
        while(1)
        {
            if(flag[i][j]==3)
            {

                v.push_back(ch[i-1]);
                i=i-1;
                j=j-1;
            }
            else if(flag[i][j]==2)
            {
                j=j-1;
            }
            else
            {
                i=i-1;
            }
            if(i==0||j==0)
                break;
        }
        printf("%d\n",v.size());


    }










return 0;
}
