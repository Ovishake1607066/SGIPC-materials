#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll n,y,x;
    set<ll>s;
    set<ll>::iterator it=s.begin();
    cin>>n;
    loop
    {
        cin>>y>>x;
        if(y==1)
            s.insert(x);
        else if(y==2)
        {
            if(s.count(x))
                s.erase(x);
        }
        else
        {
            if(s.find(x)==s.end())
                cout<<"No"<<endl;

            else
                cout<<"Yes"<<endl;
        }

    }
}
