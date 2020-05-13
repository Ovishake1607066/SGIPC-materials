#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<=n;i++)
#define loop2 for(ll j=0;j<t;j++)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    loop2
    {
        ll n,a,b,c,d,e;
        cin>>n;
        loop
        {
            if(i==0)
            {
                cin>>a;
                cout<<a;
            }
            else if(i==n)
                cout<<a;
            else
                {
                    cin>>b;
                    c=(a*b)/(__gcd(a,b));
                    cout<<c;
                    a=b;
                }
            if(i<=n-1)
                cout<<" ";
            else
                cout<<endl;
        }
    }
}
