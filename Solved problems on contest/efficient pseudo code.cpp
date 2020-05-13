#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long a[100000008],prime[100000008];
int main()
{
    ll t,n,m,p,s,b,c,d,e,ans=0,g;
    for(ll i=3;i*i<=100000005;i+=2)
    {
        if(a[i]==0)
        {
            for(ll j=i*i;j<=100000005;j=j+(i*2))
                a[j]=1;
        }
    }
    prime[0]=2;
    for(ll i=3,j=1;i<=100000005;i+=2)
    {
        if(a[i]==0)
        {
            prime[j++]=i;
            e=j;
        }
    }
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cin>>n>>m;
        p=pow(n,m);
        s=1;
        for(ll j=0;j<e && prime[j]*prime[j]<=p;j++)
        {
            if(p%prime[j]==0)
            {
                g=1;
                while(p%prime[j]==0)
                {
                    p=p/prime[j];
                    g++;
                }
                s=s*((pow(prime[j],g)-1)/(prime[j]-1));
            }
        }
        if(p!=1)
            s=s*(p+1);
        s=s%100000007;
        cout<<"Case "<<i<<": "<<s<<endl;
    }
}
