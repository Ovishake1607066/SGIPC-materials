#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[110];
    cin>>s;
    int l,i,c1=0,c2=0,c3=0,c4=0,c5=0,c6;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(c3==0)
            c6=1;
        else
            c6=0;
        if(s[i]=='h')
            c1=1;
        if(s[i]=='e'&&c1==1)
            c2=1;
        if(s[i]=='l'&&c2==1)
            {
                c3=1;
            }
        if(s[i]=='l'&&c3==1&&c6==0)
                c4=1;
        if(s[i]=='o'&&c4==1)
            {
                c5=1;
                break;
            }
    }
    if(c5==1)
        printf("YES\n");
    else
        printf("NO\n");
}
