#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a,b,c,d,e,s;
    cin>>t;
    for(int l=1;l<=t;l++)
    {
        d=0;
        cin>>n;
        s=1;
        for(int i=2;i<=n;i++)
            s=s*i;
        cout<<"Case "<<l<<": "<<n<<" = ";
        c=0;
        while(s%2==0)
        {
            c++;
            s=s/2;
        }
        if(c!=0)
            {
                cout<<2<<" ("<<c<<")";
                d=1;
            }
        c=0;
        for(int i=3;i<=s;i=i+2)
        {
            c=0;
            while(s%i==0)
            {
                c++;
                s=s/i;
            }
            if(d==1 && c!=0)
                cout<<" * ";
            if(c!=0)
            {
                cout<<i<<" ("<<c<<")";
                d=1;
            }
        }
        cout<<endl;
    }
}
