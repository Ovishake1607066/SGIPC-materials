#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<ll>v;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll p;
        cin>>p;
        v.push_back(p);
    }
    ll x,a,b;
    cin>>x>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for(ll i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}

