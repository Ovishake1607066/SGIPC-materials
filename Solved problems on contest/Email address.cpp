#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    ll n=s1.size(),a=0,b=0;
    for(ll i=0;i<n;i++)
    {
        if(s1[i]=='a' && s1[i+1]=='t' && i!=0 && i!=n-2 && a!=1)
        {
            a=1;
            s2.push_back('@');
            i++;
        }
        else if(s1[i]=='d' && s1[i+1]=='o' && s1[i+2]=='t' && i!=0 && i!=n-3)
        {
            s2.push_back('.');
            i+=2;
        }
        else
        {
            s2.push_back(s1[i]);
        }
    }
    cout<<s2<<endl;
}
