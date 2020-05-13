#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define l 1000000
long long a[10000000],prime[1000000];
int main()
{
    ll m,n,b,c,d,e;
    for(ll i=3;i*i<=l;i+=2)
        if(a[i]==0)
            for(ll j=i*i;j<=l;j=j+(i*2))
                a[j]=1;
    prime[0]=2;
    for(ll i=3,j=1;i<=l;i+=2)
        if(a[i]==0)
    {
        prime[j++]=i;
        e=j;
    }
    while(cin>>n>>m)
    {
        d=m;
        b=0;
        for(ll i=0;i<e && prime[i]*prime[i]<=m;i++)
        {
            if(m%prime[i]==0)
            {
                ll c1=0;
                while(m%prime[i]==0)
                {
                    c1++;
                    m=m/prime[i];
                }
                ll i2=prime[i],c2=0;
                while(i2<=n)
                {
                    c2=c2+(n/i2);
                    i2=i2*prime[i];
                }
                if(c2<c1)
                    {
                        b=1;
                        cout<<d<<" does not divide "<<n<<"!"<<endl;
                        break;
                    }
            }
        }
        if(b==1)
            continue;
        if(m!=1)
            {if(n<m)
                cout<<d<<" does not divide "<<n<<"!"<<endl;
             else
                cout<<d<<" divides "<<n<<"!"<<endl;
            }
        else
            cout<<d<<" divides "<<n<<"!"<<endl;
    }
}
