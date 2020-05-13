#include<iostream>
#include<map>
#include<utility>
#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    map<string,string>m;
    map<string,string>::iterator it;
    string s,s2,s3;
    while(1)
    {
        getline(cin,s);
        if(s=="")
            break;
        stringstream st(s);
        st>>s3;
        st>>s2;
        m.insert(make_pair(s3,s2));
    }
    while(cin>>s)
    {
        it=m.begin();
        ll b=0;
        for(it;it!=m.end();it++)
        {
            if((*it).second==s)
            {
                cout<<it->first<<endl;
                b=1;
                break;
            }
        }
        if(b==0)
            cout<<"eh"<<endl;
    }
}
