#include <bits/stdc++.h>
#include <functional>
#include<stdio.h>
using namespace std;
#define int         long long
#define double      long double
#define pb          push_back
#define pf          push_front
#define pi         pair<int,int>
#define vi          vector<int>
#define vpi        vector<pi>
#define mi          map<int,int>
#define vvi         vector<vector<int>>
#define mpi         map<pi,int>
#define pipi        pair<int,pair<int,int> >
#define all(a)      (a).begin(),(a).end()
#define rall(a)     (a).rbegin(),(a).rend()
#define x         first
#define y         second
#define sz(x)       (int)x.size()
#define g         endl
#define PI          3.141592653589
#define bs(v,n)     binary_search(all((v)),(n))
#define lb(v,n)     lower_bound(all((v)),(n))
#define ub(v,n)     upper_bound(all((v)),(n))
#define fo(i,l,u)   for(i=l;i<u;i++)
#define rfo(i,l,u)  for(i=l;i>=u;i--)
#define rf(s)       for(auto &c : s)
#define allfo(s)    for(auto it=(s).begin();it!=(s).end();it++) //use Iterator
#define tezz        ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD         1000000007
#define ef          else if
const int N = 200006;
int gcd(int a, int b) {  if (a == 0)  return b; return gcd(b % a, a); }
signed main()
{
  tezz;
  int t,k;
  cin>>t;
  fo(k,0,t)
  {
    string s1;
    int i,n;
    cin>>n;
    vector<pair<int,pair<int,int> > >v;
    int s[n],e[n];
    fo(i,0,n)
    {
      cin>>s[i]>>e[i];
      v.pb({s[i],{e[i],i}});
      s1+='C';
    }
    sort(all(v));
    int c=0,j=0,flag=0;
    fo(i,0,v.size())
    {
      if(v[i].x>=c)
      {
        s1[v[i].y.y]='C';
        c=v[i].y.x;
       }
      else if(v[i].x>=j)
      {
        s1[v[i].y.y]='J';
        j=v[i].y.x;
      }
      else
      {
        flag=1;
        break;
      }
    }
    if(flag==1)
    {
      cout<<"Case #"<<k+1<<": "<<"IMPOSSIBLE"<<endl;
      continue;
    }
    cout<<"Case #"<<k+1<<": "<<s1<<endl;
  }
  return 0;
}
