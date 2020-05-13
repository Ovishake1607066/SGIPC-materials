#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long a[100000008],prime[100000008];
int main()
{
    ll n,b,c,e,d;
    for(ll i=3;i*i<=1000000000000000;i+=2)
    {
        if(a[i]==0)
        {
            for(ll j=i*i;j<=1000000000000000;j=j+(i*2))
                a[j]=1;
        }
    }
    prime[0]=2;
    for(ll i=3,j=1;i<=1000000000000000;i+=2)
    {
        if(a[i]==0)
        {
            prime[j++]=i;
            e=j;
        }
    }
    while(cin>>n && n!=0)
    {
        for(ll i=0;prime[i]*prime[i]<=n && i<e;i++)
        {
            if(n%prime[i]==0)
            {
                c=0;
                while(n%prime[i]==0)
                {
                    n=n/prime[i];
                    c++;
                }
                cout<<prime[i]<<"^"<<c<<" ";
            }
        }
        if(n!=1)
            cout<<n<<"^"<<1;
        cout<<endl;
    }
}

