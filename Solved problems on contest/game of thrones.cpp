#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,s=0,j=0,g;
    cin>>n>>k;
    long long int t[200];
    for(int p=0,i=0,m=0; ;)
    {
        g=0;
        if(i>=k)
            break;
        char c[10];
        cin>>c;
        char temp;
        if(c[0]=='-')
        {
                temp=c[1];
                g=1;
        }
        else if(c[0]!='-' && c[0]!='u')
            {
                temp=c[0];
            }
        if(j==1)
            {
                s=t[m-1-(temp-48)];
                j=0;
                p=m-1-(temp-48);
                t[p]=s;
                m=m-1-(temp-48)+1;
                p++;
                i++;
                continue;
            }
        if((strcmp(c,"undo")))
        {
            if(g==1)
                s=s-(temp-48);
            else
                s=s+(temp-48);
            if(s>=n)
                {
                while(1)
                {
                    s=s-n;
                    if(s<n)
                       {
                           break;
                       }
                }
                }
            else if(s<0)
            {
                while(1)
                {
                    s=s+n;
                    if(s>=0)
                       {
                           break;
                       }
                }
            }
             t[p]=s;
             p++;
             m++;
             i++;
        }
        else
        {
            j=1;
        }

    }
    cout<<s;
}
