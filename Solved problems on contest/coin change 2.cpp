#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll way[10005];
ll n,k,coin[105];
ll coinchange(ll k)
{
    ll i,j;
    for(i=0; i<n; i++)
    {
        for(j=1; j<=k; j++)
        {
            if(coin[i]<=j)
                way[j]+=way[j-coin[i]]%100000007;
        }
    }
    return way[k];
}
int main()
{
    ll i,t,no=0;
    cin>>t;
    while(t--)
    {
        scanf("%d%d",&n,&k);
        way[0]=1;
        for(i=1; i<=k; i++)
            way[i]=0;
        for(i=0; i<n; i++)
            scanf("%d",&coin[i]);
        printf("Case %lld: %lld\n",++no,coinchange(k)%100000007);
    }
}
