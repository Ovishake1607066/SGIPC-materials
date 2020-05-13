#include<bits/stdc++.h>
#define ll long long
#define m 100000007
using namespace std;
ll g=1;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,s=0;
        cin>>n>>k;
        ll a1[n],a2[n],a3[n+1][k+1];
        for(ll i=0;i<n;i++)
            cin>>a1[i];
        for(ll i=0;i<n;i++)
            cin>>a2[i];
        for(ll i=0;i<=n;i++)
            a3[i][0]=1;
        for(ll i=1;i<=k;i++)
            a3[0][i]=0;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=k;j++)
            {
                a3[i][j]=0;
                //a3[i][j]=(a3[i-1][j])%m;
                    //cout<<i<<j<<endl;
                    for(ll k=j-a1[i-1],v=1;v<=a2[i-1] && k>=0;k-=a1[i-1],v++)
                        {
                            s+=a3[i-1][k];
                        }
                        //cout<<s<<endl;
                    //if(s<=a2[i-1])
                        //a3[i][j]+=(a3[i-1][j]+s)%m;
                    //else
                        a3[i][j]+=((s+a3[i-1][j])%m);

                s=0;
            }
        }
        /*for(ll i=0;i<=n;i++)
        {
            for(ll j=0;j<=k;j++)
            {
                cout<<a3[i][j];
            }
            cout<<endl;
        }*/
        cout<<"Case "<<g++<<": "<<(a3[n][k])%m<<endl;
    }
}
