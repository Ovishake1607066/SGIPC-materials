#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define inf 1 << 28
int mat[][10] = {
    { -1, 2, 5 },
    { 4, -2, 3 },
    {
        1, 2, 10,
    }
};
int dp[10][10];
int r = 3, c = 3;
int call(int i, int j)
{
    cout<<i<<j<<endl;
    if (i >= 0 && i < r and j >= 0 and j < c) //if still inside the array
    {
        if (dp[i][j] != -1)
            return dp[i][j];
        int ret = -inf;
        //try to move to 3 direction,also add current cell's point
        ret = max(ret, call(i + 1, j) + mat[i][j]);
        ret = max(ret, call(i + 1, j - 1) + mat[i][j]);
        ret = max(ret, call(i + 1, j + 1) + mat[i][j]);
        cout<<"man    "<<ret<<endl;
        return dp[i][j] = ret;
    }
    else
        return 0; //if outside the array
}
int main()
{
    // READ("in")
    for(ll i=0;i<10;i++)
        for(ll j=0;j<10;j++)
         dp[i][j]=-1;

    printf("%d\n", call(0, 0));
        for(ll i=0;i<10;i++)
        for(ll j=0;j<10;j++)
         cout<<dp[i][j];
    return 0;
}
