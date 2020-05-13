#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    while(cin>>n)
    {
        ll a[n],m,b=10000004,c=0,d,e,f;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cin>>m;
        sort(a,a+n);
        for(ll i=0; i<n; i++)
            for(ll j=i+1; j<n; j++)
            {
                if(a[i]+a[j]==m)
                {
                    if(a[j]-a[i]<b)
                    {
                        b=a[j]-a[i];
                        c=a[i];
                        d=a[j];
                    }
                }
            }
            cout<<"Peter should buy books whose prices are "<<c<<" and "<<d<<"."<<endl<<endl;
        }
}
