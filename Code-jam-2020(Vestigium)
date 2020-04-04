#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,j,n,i,k;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        cin>>n;
        long long int a[n][n],tr=0,r=0,c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(i==j) tr+=a[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            vector<long long int> v;
            for(j=0;j<n;j++)
            {
                if(find(v.begin(),v.end(),a[i][j])!=v.end()) {r++; break;}
                v.push_back(a[i][j]);
            }
        }
        for(j=0;j<n;j++)
        {
            vector<long long int> v;
            for(i=0;i<n;i++)
            {
                if(find(v.begin(),v.end(),a[i][j])!=v.end()) {c++; break;}
                v.push_back(a[i][j]);
            }
        }
        cout<<"Case #"<<k<<": "<<tr<<" "<<r<<" "<<c<<endl;
    }
    return 0;
}
