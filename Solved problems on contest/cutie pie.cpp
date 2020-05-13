#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m,i,a,b,d,s,j,k;
    char c[1000][1000];
    cin>>t;
    for(i=0;i<t;i++)
    {
        s=0;
        cin>>n>>m;
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
               cin>>c[j][k];
            }
        }
        for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                if(c[j][k]=='p')
                {
                    if(c[j][k+1]=='i' && c[j][k+2]=='e' && k+1<m && k+2<m)
                        s=1;
                    else if(c[j+1][k]=='i' && c[j+1][k]=='e')
                        s=1;
                    else if((c[j+1][k+1]=='i' && c[j+2][k+2]=='e') ||(c[j-1][k-1]=='i' &&c[j-2][k-2]=='e'))
                        s=1;
                }
            if(s==1)
                break;
            }
            if(s==1)
                break;
        }
        if(s==1)
            cout<<"Cutie Pie!"<<endl;
        else
            cout<<"Sorry Man"<<endl;
    }
}
