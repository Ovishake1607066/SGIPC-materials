#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[20][3];
ll a[20][3];
ll call(ll i,ll j,ll n)
{
    cout<<i<<j<<endl;
    if (i >= 0 && i < n &&j >= 0 && j < 3) //if still inside the array
    {
        if (dp[i][j] != -1)
            return dp[i][j];
        ll ret = 1000000;
        //try to move to 3 direction,also add current cell's point
        ret = min(ret, call(i + 1, j,n) + a[i][j]);
        ret = min(ret, call(i + 1, j - 1,n) + a[i][j]);
        ret = min(ret, call(i + 1, j + 1,n) + a[i][j]);
        cout<<"man    "<<ret<<endl;
        return dp[i][j] = ret;
    }
    else
        return 0; //if outside the array
}
int main()
{
    ll t,no=0;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll b,c,d,e;
        for(ll i=0;i<n;i++)
            for(ll j=0;j<3;j++)
                cin>>a[i][j];
        for(ll i=0;i<n;i++)
            for(ll j=0;j<3;j++)
                cout<<a[i][j];
        for(ll i=0;i<20;i++)
            for(ll j=0;j<3;j++)
                dp[i][j]=-1;
        cout<<"Case "<<++no<<": "<<call(0,0,n)<<endl;
        for(ll m=0;m<n;m++)
        {for(ll p=0;p<3;p++)
            cout<<dp[m][p];
            cout<<endl;
        }
    }
}
