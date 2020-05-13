#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,e=1;
    while(cin>>n && n!=0)
    {
        ll a1[n],m,b=0,c=0,d,f;
        vector<ll>a2;
        for(ll i=0; i<n; i++)
        {
            cin>>a1[i];
        }
        cin>>m;
        for(ll i=0; i<n; i++)
            for(ll j=i+1; j<n; j++)
            {
                a2.push_back(a1[i]+a1[j]);
                b++;
            }
        sort(a2.begin(),a2.end());
        cout<<"Case "<<e<<":"<<endl;
        for(ll i=0;i<m;i++)
        {
            cin>>c;
            if(c<a2[0])
            {
                cout<<"Closest sum to "<<c<<" is "<<a2[0]<<"."<<endl;
                continue;
            }
            else if(c>a2[b-1])
            {
                cout<<"Closest sum to "<<c<<" is "<<a2[b-1]<<"."<<endl;
                continue;
            }
            for(ll j=0;j<b;j++)
            {
                if(a2[j]==c)
                    {
                        cout<<"Closest sum to "<<c<<" is "<<a2[j]<<"."<<endl;
                        break;
                    }
                else if(a2[j]>c)
                {
                    if(a2[j]-c<c-a2[j-1])
                        cout<<"Closest sum to "<<c<<" is "<<a2[j]<<"."<<endl;
                    else
                        cout<<"Closest sum to "<<c<<" is "<<a2[j-1]<<"."<<endl;
                        break;
                }
            }
        }
        e++;
    }
}
