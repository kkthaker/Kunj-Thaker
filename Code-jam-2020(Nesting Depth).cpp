#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,j,n,i,k;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        long long int o=0,l=0,sa=0;
        string s,ans="";
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            sa=0;
            for(j=i+1;j<s.length();j++)
            {
                if(s[i]!=s[j]) break;
                else sa++;
            }
            for(o;o<(s[i]-48);o++) {ans+="(";}
            for(j=0;j<=sa;j++) {ans+=s[i];}
            i=i+sa;
            if((i+1)<s.length())
            {
                if((s[i+1]-48)<(s[i]-48))
                {
                    for(j=1;j<=((s[i]-48)-(s[i+1]-48));j++) {ans+=")"; o--;}
                }
            }
            if(i==s.length()-1)
            {
                for(j=1;j<=o;j++) {ans+=")";}
                break;
            }
        }
        cout<<"Case #"<<k<<": "<<ans<<endl;
    }
    return 0;
}
