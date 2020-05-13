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
    sort(v.begin(),v.end());
    for(ll i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
