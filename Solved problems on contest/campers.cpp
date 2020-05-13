#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n+1]={0},a2[k+1],b,c,d,e,s=0;
    for(ll i=1;i<=k;i++)
        {
            cin>>b;
            a2[i]=b;
            if(b-1>=1)
                a[b-1]++;
            if(b+1<=n)
                a[b+1]++;
        }
    sort(a2+1,a2+k+1);
    for(ll i=a2[1]-1;i>=1;i=i-2)
        a[i]++;
    for(ll i=1;i<=k-1;i++)
    {
        for(ll j=a2[i]+1;j<=a2[i+1];j+=2)
        {
            if(j==a2[i+1])
                break;
            a[j]++;
        }
    }
    for(ll i=a2[k]+1;i<=n;i+=2)
        a[i]++;
    for(ll i=1;i<=n;i++)
    {

        if(!a[i])
            s++;
    }
    cout<<s<<endl;
}
