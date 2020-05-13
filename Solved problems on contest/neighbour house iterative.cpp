#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[25][3];
ll dp[25][3];
int main()
{
    ll t,no=0;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n][3],dp[n][3],b,c,d,e;
        for(ll i=0;i<n;i++)
            for(ll j=0;j<3;j++)
                cin>>a[i][j];
        dp[0][0]=a[0][0];
        dp[0][1]=a[0][1];
        dp[0][2]=a[0][2];
        for(ll i=1;i<n;i++)
        {
            dp[i][0]=min(dp[i-1][1],dp[i-1][2])+a[i][0];
            dp[i][1]=min(dp[i-1][0],dp[i-1][2])+a[i][1];
            dp[i][2]=min(dp[i-1][1],dp[i-1][0])+a[i][2];
            //cout<<dp[i][0]<<dp[i][1]<<dp[i][2]<<endl;
        }
        ll x=min(dp[n-1][1],dp[n-1][2]);
        cout<<"Case "<<++no<<": "<<min(x,dp[n-1][0])<<endl;
    }
}
