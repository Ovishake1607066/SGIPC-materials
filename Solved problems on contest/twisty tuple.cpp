#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    loop
    {
        cin>>a[i];
    }
    ll b,c=0,d,e;
    for(ll i=n-1;i>=2;i--)
    {
        d=0;
        e=0;
        for(ll j=i-1;j>=0;j--)
        {
            if(a[j]>a[i] && d==0)
            {
                e=a[j];
                d=1;
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

