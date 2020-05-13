#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    while(cin>>n && n)
    {
        string s;
        cin>>s;
        ll le=s.size();
        for(ll i=0;i<n;i++)
        {
            ll j=i;
            ll k=2*n-i-1;
            while(1)
            {
                if(j<le)
                cout<<s[j];
                if(k<le)
                cout<<s[k];
                //cout<<j<<"   "<<k<<endl;
                j+=2*n;
                k+=2*n;
                if(j>=le && k>=le)
                    break;
            }
        }
        cout<<endl;
    }
}
