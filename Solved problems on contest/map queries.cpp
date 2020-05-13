#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<q;i++)
using namespace std;
int main()
{
    ll q,t,y;
    string x;
    map<string,ll>m;
    map<string,ll>::iterator it;
    cin>>q;
    loop
    {
        cin>>t;
        if(t==1)
        {
            cin>>x>>y;
            it=m.find(x);
            if(it!=m.end())
            {
                (it->second)+=y;
            }
            else
                m.insert(make_pair(x,y));
        }
        else if(t==2)
        {
            cin>>x;
            m.erase(x);
        }
        else
        {
            cin>>x;
            it=m.find(x);
            if(it!=m.end())
                cout<<it->second<<endl;

        }
    }
}
