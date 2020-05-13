#include<bits/stdc++.h>
#define ll long long
#define loop for(ll i=0;i<n;i++)
#define loop2 for(ll j=0;j<m1;j++)
using namespace std;
int main()
{
    ll t,x=1;
    cin>>t;
    while(t--)
    {
        string s;
        if(x==1)
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        getline(cin,s);
        //cout<<s.size()<<endl;
        cout<<"Problem #"<<x++<<endl;
        map<char,double>m;
        double a,b,c,d,e;
        for(ll i=0; i<s.size(); i++)
        {
            //cout<<s[i]<<endl;
            if(s[i]=='P')
            {
                if(s[i+1]!='=')
                    continue;
                ll z=0;
                if(s[i+2]=='-')
                {
                    z=1;
                    i++;
                }
                double a=0,c=-1,j=0;
                for(i=i+2; ; i++,j++)
                {
                    if((s[i]<'0' || s[i]>'9') && s[i]!='.')
                    {

                        if(c!=-1)
                        {
                            double m=1;
                            for(ll l=0;l<j-c-1;l++)
                                m=m*(10.0);
                            a=a/m;
                        }
                        if(z==1)
                            a=a*(-1);
                        if(s[i]=='W')
                            m.insert(make_pair('P',a));
                        else if(s[i]=='m')
                            m.insert(make_pair('P',a/1000.0));
                        else if(s[i]=='k')
                            m.insert(make_pair('P',a*1000));
                        else if(s[i]=='M')
                            m.insert(make_pair('P',a*1000000));
                        break;
                    }
                    if(s[i]=='.')
                    {
                        c=j;
                        continue;
                    }
                    b=(double)(s[i]-'0');
                    a=a*10.0+b;
                }
            }
            else if(s[i]=='I')
            {
                if(s[i+1]!='=')
                    continue;
                ll z=0;
                if(s[i+2]=='-')
                {
                    z=1;
                    i++;
                }
                double a=0,c=-1,j=0;
                for(i=i+2; ; i++,j++)
                {
                    //cout<<"              "<<s[i]<<endl;
                    if((s[i]<'0' || s[i]>'9') && s[i]!='.')
                    {
                        //cout<<((j-c-1)*10.0)<<endl;
                        if(c!=-1)
                        {
                            double m=1;
                            for(ll l=0;l<j-c-1;l++)
                                m=m*(10.0);
                            a=a/m;
                        }
                        if(z==1)
                            a=a*(-1);
                        if(s[i]=='A')
                            m.insert(make_pair('I',a));
                        else if(s[i]=='m')
                            m.insert(make_pair('I',a/1000.0));
                        else if(s[i]=='k')
                            m.insert(make_pair('I',a*1000));
                        else if(s[i]=='M')
                            m.insert(make_pair('I',a*1000000));
                        break;
                    }
                    if(s[i]=='.')
                    {
                        c=j;
                        continue;
                    }
                    b=(double)(s[i]-'0');
                    a=a*10.0+b;
                    //cout<<a<<endl;
                }
            }
            else if(s[i]=='U')
            {
                if(s[i+1]!='=')
                    continue;
                ll z=0;
                if(s[i+2]=='-')
                {
                    z=1;
                    i++;
                }
                double a=0,c=-1,j=0;
                for(i=i+2; ; i++,j++)
                {
                    if((s[i]<'0' || s[i]>'9')&&s[i]!='.')
                    {
                        if(c!=-1)
                        {
                            double m=1;
                            for(ll l=0;l<j-c-1;l++)
                                m=m*(10.0);
                            a=a/m;
                        }
                        if(z==1)
                            a=a*(-1);
                        if(s[i]=='V')
                            m.insert(make_pair('U',a));
                        else if(s[i]=='m')
                            m.insert(make_pair('U',a/1000.0));
                        else if(s[i]=='k')
                            m.insert(make_pair('U',a*1000));
                        else if(s[i]=='M')
                            m.insert(make_pair('U',a*1000000));
                        break;
                    }
                    if(s[i]=='.')
                        {c=j;
                        continue;
                        }
                    b=(double)(s[i]-'0');
                    a=a*10.0+b;
                    //cout<<a<<endl;
                }
            }
        }
        //cout<<m.size()<<endl;
        map<char,double> :: iterator it,it2;
        it=m.begin(),it2=it++;
        if(it->first=='P' && it2->first=='I')
        {
            printf("U=%.2fV\n\n",(it->second)/(it2->second));
        }
        else if(it->first=='P' && it2->first=='U')
        {
            printf("I=%.2fA\n\n",(it->second)/(it2->second));
        }
        else if(it->first=='U' && it2->first=='I')
        {
            printf("P=%.2fW\n\n",(it->second)*(it2->second));
        }
        else if(it->first=='I' && it2->first=='P')
        {
            printf("U=%.2fV\n\n",(it2->second)/(it->second));
        }
        else if(it->first=='U' && it2->first=='P')
        {
            printf("I=%.2fA\n\n",(it2->second)/(it->second));
        }
        else if(it->first=='I' && it2->first=='U')
        {
            printf("P=%.2fW\n\n",(it->second)*(it2->second));
        }
        m.clear();
    }
}
