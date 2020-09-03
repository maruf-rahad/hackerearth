#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,x,y,sum,flag,m,n,t,l;
    string s,s2,s3;

    while(scanf("%d",&n)==1)
    {
        s.clear();
        s2.clear();
        s = " ";
        s2 = " ";
        cin>>s3;
        s+=s3;
        cin>>s3;
        s2+=s3;
        char ch = s[n];

        for(i=n;i>=1;i--)
        {
            flag = 0;
            if(ch==s2[i])
            {
               // printf("i %d\n",i);
                x = i;
                for(j=i-1;j>=1;j--)
                {
                   // printf("%c %c\n",s[j+x-1],s2[j]);
                    if(j+x-1<=n&&s[j+x-1]!=s2[j])
                    {
                        flag = 1;
                        break;
                    }
                            x--;
                }
               // printf("f %d\n",flag);
                if(flag==0&&x>1)
                {
                    for(j=1;j<=x-1;j++)
                    {
                        if(s2[j+x]=!s[j])
                        {
                            flag = 1;
                        }
                    }
                }

                if(flag==0)
                {
                    printf("%d\n",n-i);
                    break;
                }


            }
        }
    }







return 0;
}
