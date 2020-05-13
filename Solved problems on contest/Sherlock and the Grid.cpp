#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll s=0;
        char c[n][n],c2[n][n];
        for(ll i=0; i<n; i++)
            for(ll j=0; j<n; j++)
            {
                cin>>c[i][j];
                c2[i][j]=c[i][j];
            }
        for(ll i=0; i<n; i++)
        {
            for(ll j=n-1; j>=1; j--)
            {
                if(c[i][j]=='#')
                {
                    for(ll k=j-1; k>=0; k--)
                        c2[i][k]='#';
                    break;
                }
            }
        }

        for(ll i=n-1; i>=0; i--)
        {
            for(ll j=n-1; j>=1; j--)
            {
                if(c[j][i]=='#')
                {
                    for(ll k=j-1; k>=0; k--)
                        c2[k][i]='#';
                    break;
                }
            }
        }

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
            {
                if(c2[i][j]=='.')
                    s++;
            }
        }
        cout<<s<<endl;
    }
}
