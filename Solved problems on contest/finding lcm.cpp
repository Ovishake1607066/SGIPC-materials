#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,l,c,d,e,f,j;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>l;
        c=(a/(__gcd(a,b)))*b;
        if(l%c!=0)
        {
            cout<<"Case "<<i<<": "<<"impossible"<<endl;
            continue;
        }
        for(j=1; ;j++)
            {
                d=l/c;
                f=__gcd(c,d);
                if(f==1)
                    break;
                d=d*f;
                c=c/f;
            }
                cout<<"Case "<<i<<": "<<d<<endl;
    }
}
