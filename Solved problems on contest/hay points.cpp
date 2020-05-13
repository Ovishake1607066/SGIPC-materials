#include<iostream>
#include<map>
#include<utility>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll m1,n,a,b,c;
    cin>>m1>>n;
    string s,s2;
    map<string,ll>m;
    map<string,ll>:: iterator it;
    loop2
    {
        cin>>s>>a;
        m.insert(make_pair(s,a));
    }
    loop
    {
        c=0;
        while(cin>>s2 && s2!=".")
        {
            if(s2==" ")
                continue;
            it=m.begin();
            for(it;it!=m.end();it++)
            {
                if(it->first==s2)
                    c+=it->second;
            }
        }
        cout<<c<<endl;
    }
}
