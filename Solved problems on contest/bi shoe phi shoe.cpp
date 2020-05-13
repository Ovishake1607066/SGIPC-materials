#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define l 1000008
long long  phi[1000000];
int main()
{
    ll b,a,c,d,e,t,n,s=0;
    for(ll i=2;i<=l;i++)
        if(phi[i]==0)
        for(ll j=i*i;j<=l;j+=i)
            phi[j]=1;
    cin>>t;
    for(ll x=1;x<=t;x++)
    {
        s=0;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            for(ll j=a+1; ;j++)
            {
                if(phi[j]==0)
                {
                    s=s+j;
                    break;
                }
            }
        }
        cout<<"Case "<<x<<": "<<s<<" Xukha"<<endl;
    }
}
