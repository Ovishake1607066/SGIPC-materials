#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,g,l,a,b,c,d,e;
    cin>>t;
    while(t--)
    {
        cin>>g>>l;
        if(l%g==0)
            cout<<g<<" "<<l<<endl;
        else
            cout<<-1<<endl;
    }
}
