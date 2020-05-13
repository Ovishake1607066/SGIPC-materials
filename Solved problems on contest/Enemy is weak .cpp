#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a,b,c=0,d;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(ll i=0;i<n-2;i++)
    {
        if(v[i+1]>v[i])
            continue;
        for(ll j=i+1;j<n-1;j++)
        {      //cout<<i<<endl;
            if(v[j+1]>v[j])
                continue;
            for(ll k=j+1;k<n;k++)
            {
                if(v[k]<v[j])
                    c++;
                else
                    break;
            }
        }
    }
    cout<<c<<endl;
}
