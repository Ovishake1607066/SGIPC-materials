#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,r,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        cin>>a;
        a=abs(a);
        r=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='-')
                continue;
            r=((r*10)+(s[j]-'0'))%a;
        }
        if(r==0)
            cout<<"Case "<<i+1<<": divisible"<<endl;
        else
            cout<<"Case "<<i+1<<": not divisible"<<endl;
    }
}

