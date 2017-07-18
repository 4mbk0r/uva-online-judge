#include "bits/stdc++.h"
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	string l,r,s;
	for(int j=1;j<=t;j++){
		getline(cin,s);
		l=r="";
		for (int i = 0; i < s.length(); ++i)
		{
			if('a'<=s[i] && s[i]<='z'){
				l=s[i]+l;
				r=r+s[i];
			}
		}
		int u = l.length();
		double x=(double)u/(double)sqrt(u);
		cout<<"Case #"<<j<<":"<<endl;
		if(u==x*x && l==r) cout<<x<<endl;
		else cout<<"No magic :("<<endl;
	}
	return 0;
}