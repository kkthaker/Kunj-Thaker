#include <bits/stdc++.h>
using namespace std;
int main()
{
	int test,bits;
	cin>>test>>bits;
	while(test--)
	{
		int i;
	   	char t,t1;
	    string p="";
	    string temp="";
	    for(i=0;i<10;i++)
		    temp+='1';
	    for(i=1;i<bits+1;i++)
		{
		    cout<<i<<endl;
		    cout.flush();
		    cin>>t;
		    if(i==11)
		    {
		        int r=rand()%4+1;
		        if(r==1)
		        {
                    p=to_string(stoi(p)^stoi(temp));
		        }
		        else if(r==2)
		        {
		           reverse(p.begin(),p.end());
		        }
		        else if(r==3)
		        {
                    p=to_string(stoi(p)^stoi(temp));
                    reverse(p.begin(),p.end());
		        }
		    }
		        p+=t;
		}
		cout<<p<<endl;
		cout.flush();
		cin>>t1;
		if(t1=='Y')
		continue;
		else
		return 0;
	}
	return 0;
}
