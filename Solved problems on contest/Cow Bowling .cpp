#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define inf 1 << 2800
ll a[400][400];
ll dp[400][400];
ll call(ll i, ll j,ll n)
{
    cout<<i<<j<<endl;
    if (i >= 0 && i < n &&j >= 0 && j < n) //if still inside the array
    {
        if (dp[i][j] != -1)
            return dp[i][j];
        ll ret = -inf;
        //try to move to 3 direction,also add current cell's point
        ret = max(ret, call(i + 1, j,n) + a[i][j]);
        ret = max(ret, call(i + 1, j - 1,n) + a[i][j]);
        ret = max(ret, call(i + 1, j + 1,n) + a[i][j]);
        cout<<"man    "<<ret<<endl;
        return dp[i][j] = ret;
    }
    else
        return 0; //if outside the array
}
int main()
{
    ll n,b,c;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<=i;j++)
        {
            cin>>a[i][j];
        }
    }
    for(ll i=0;i<400;i++)
        for(ll j=0;j<400;j++)
            dp[i][j]=-1;
    printf("%d\n", call(0, 0,n));
    return 0;
}
