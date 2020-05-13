#include<iostream>
#include<map>
#include<utility>
#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    vector<pair<ll,ll> >v;
    vector<pair<ll,ll> >:: iterator it;
    ll a;
    while(cin>>a)
    {
        it=v.begin();
        ll b=0;
        for(it;it!=v.end();it++)
        {
            if((*it).first==a)
            {
                ((*it).second)++;
                b=1;
                break;
            }
        }
        if(b==0)
            v.push_back(make_pair(a,1));
    }
    for(it=v.begin();it!=v.end();it++)
        cout<<(*it).first<<" "<<(*it).second<<endl;
}
