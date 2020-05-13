#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<t;i++)
#define loop2 for(ll j=0;j<m;j++)
using namespace std;
int main()
{
    string s,s2,s3;
    double c=0,a=0,b,r;
    while(getline(cin,s))
    {
        stringstream si(s);
        b=0;
        a=0;
        c=0;
        while(si>>s2)
        {
            if(s2=="A")
                c+=4;
            else if(s2=="B")
                c+=3;
            else if(s2=="C")
                c+=2;
            else if(s2=="D")
                c+=1;
            else if(s2=="F")
                c+=0;
            else
                {
                    a=1;
                    break;
                }
            b++;
        }
        //cout<<c<<b<<endl;
        r=c/b;
        if(a==1)
            cout<<"Unknown letter grade in input"<<endl;
        else
            printf("%.2lf\n",r);

    }
}
