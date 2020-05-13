#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<t;j++)
using namespace std;
int main()
{
    ll n;
    ll a[n];
    cin>>n;
    loop
    {
        cin>>a[i];
    }
    ll b,c=0,d,e;
    for(ll i=n-1;i>=1;i--)
    {
        d=0;
        e=0;
        for(ll j=i-1;j>=0;j--)
        {
            if(a[j]>a[i] && b==0)
            {
                e=a[j];
                b=1;
            }
            else if(a[j]>a[i] && a[j]<e)
            {
                c++;
            }
            else if(a[j]>e)
                e=a[j];
        }
    }
    cout<<c<<endl;
}
