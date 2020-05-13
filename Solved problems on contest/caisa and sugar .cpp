#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,x,y,i,j,a[10000],b[10000],m,w,p=0;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    m=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<s ||(a[i]<=s && b[i]==0) )
        {
            if(100-b[i]>=m && b[i]!=0)
            {
                m=100-b[i];
            }
            p=1;
        }
    }
    if(p==0)
        cout<<-1;
    else
    cout<<m;
}
