#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<t;j++)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    loop2
    {
        ll n,l,r,b,c,e,d;
        cin>>n>>l>>r;
        c=0;
        ll a[n];
        loop
        {
            cin>>e;
            if(e<=l)
                a[i]=l-e;
            else if(e>=r)
                a[i]=e-r;
            else
                a[i]=0;
        }
        ll s=0;
        sort(a,a+n);
        loop
        {
            s=s+a[i];
        }
        cout<<s<<" ";
        for(ll i=n-1;i>=1;i--)
        {
            s=s-a[i];
            if(i>=2)
                {
                    cout<<s<<" ";
                }
            else
                {
                    cout<<s;
                }
        }
        cout<<endl;
    }
}
