#include<bits/stdc++.h>
using namespace std;
string s,s2;
int n;
void margesort(int l, int r)
{
    int mid = (l+r)/2;
   // printf("%d %d %d \n",l,r,mid);

    //if(l<1||r>n||l>n||r<1||mid<1||mid>n||l>r)return;

    if(l>r)return;
      cout<<s[mid];
    margesort(l,mid-1);

    //printf("return %d %d %d \n",l,r,mid);

    margesort(mid+1,r);


}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        cin>>s2;
        s = ' ';
        s = s+s2;
        margesort(1,n);
        cout<<endl;

    }










return 0;
}
