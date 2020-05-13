#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,n,s=0;
    while(cin>>n && n!=0)
    {
        s=n-1;
        for(ll i=2;i<n;i++)
        {
            for(ll j=i+1;j<=n;j++)
                s=s+__gcd(i,j);
        }
        cout<<s<<endl;
    }
}
