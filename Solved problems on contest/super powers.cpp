#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define l 70000
#define limit 2e64
ll a[70000],prime[70000];
int main()
{
    ll n,b,c,d,e,f,g;
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
    {
        if(a[i]==0)
        {
            prime[j++]=i;
            e=j;
        }
    }
    long double ar[100000];
    ar[0]=1;
    for(ll i=0,k=1;pow(prime[i],4)<limit && i<e;i++)
    {
        for(ll j=4;pow(prime[i],j)<limit;j+=2)
        {
            ar[k++]=pow(prime[i],j);
            d=k;
            cout<<int(ar[k-1])<<endl;
        }
    }
    sort(ar,ar+d);
    for(ll i=0;i<d;i++)
        cout<<ar[i]<<endl;
}
