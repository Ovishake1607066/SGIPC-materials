#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<t;i++)
#define loop2 for(ll j=0;j<n;j++)
using namespace std;
bool f(pair<int,int> a,pair<int,int>b)
{
    if(a.first==b.first)
        return a.second>b.second;
    else
        return a.first<b.first;
}
int main()
{
    ll t,n,a,b;
    scanf("%lld",&t);
    vector<pair<ll,ll> >v;
    loop
    {
        scanf("%lld",&n);
        //cout<<v.size()<<endl;
        loop2
        {
            scanf("%lld%lld",&a,&b);
            v.push_back( make_pair(a,b) );
        }
        //cout<<v.size()<<endl;
        sort(v.begin(),v.end(),f);
        for(ll k=0;k<v.size();k++)
        {
            printf("%lld %lld\n",v[k].first,v[k].second);
        }
        //cout<<endl;
        v.clear();
    }
}

