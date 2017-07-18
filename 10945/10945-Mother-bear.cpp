#include "bits/stdc++.h"
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	
	getline(cin,s);
	while(s!="DONE"){
		string l,r;
		l=r="";
		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i]>='a' && s[i]<='z'){
				l=l+s[i];
				r=s[i]+r;
			}
			if (s[i]>='A' && s[i]<='Z')
			{
				l=l+(char)(s[i]+32);
				r=(char)(s[i]+32)+r;	
			}

		}
		if(l==r) printf("You won't be eaten!\n");
		else printf("Uh oh..\n");
		getline(cin,s);
	}
	return 0;
}