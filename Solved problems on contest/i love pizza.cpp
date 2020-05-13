#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t1,a[6];
    cin>>t1;
    while(t1--)
    {
        for(ll j=0;j<6;j++)
            a[j]=0;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='M')
                a[0]++;
            else if(s[i]=='A')
                a[1]++;
            else if(s[i]=='R')
                a[2]++;
            else if(s[i]=='G')
                a[3]++;
            else if(s[i]=='I')
                a[4]++;
            else if(s[i]=='T')
                a[5]++;
        }
        a[1]=a[1]/3;
        a[2]=a[2]/2;
        sort(a,a+6);
        cout<<a[0]<<endl;
    }
}
