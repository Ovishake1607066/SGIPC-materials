#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll a[n],b,c=1000000,d=1,s=0,e=0,f=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    if(s%3==0)
    {
        cout<<s<<endl;
        return 0;
    }
    b=s%3;
    if(b==1)
        d=2;
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        if(a[i]%3==b)
        {
            c=a[i];
            break;
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(a[i]%3==d)
        {
                f++;
                e=e+a[i];
        }
        if(f==2)
            break;
    }
    if(f!=2)
        e=1000000;
    cout<<s-(min(c,e))<<endl;
}
