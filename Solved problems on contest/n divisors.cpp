#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100008],prime[100008];
#define l 100002
int main()
{
    ll a1,b,c,d,e,n,x;
    for(ll i=3;i*i<=l;i+=2)
    {
        if(a[i]==0)
        {
            for(ll j=i*i;j<=l;j=j+(i*2))
                a[j]=1;
        }
    }
    prime[0]=2;
    for(ll i=3,j=1;i<=l;i+=2)
        {if(a[i]==0)
    {
        prime[j++]=i;
        e=j;
    }
    }
    cin>>a1>>b>>n;
    ll count=0;
    for(ll i=a1;i<=b;i++)
    {
        d=1;
        x=i;
        for(ll j=0;j<e && prime[j]*prime[j]<=x;j++)
        {
            if(i%prime[j]==0)
            {
                c=1;
                while(x%prime[j]==0)
                {
                    c++;
                    x=x/prime[j];
                }
                d=d*c;
            }
        }
        if(x>1)
            d=d*2;
        if(d==n)
            count++;
    }
    cout<<count<<endl;
}
