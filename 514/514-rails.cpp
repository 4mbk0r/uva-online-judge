#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while(scanf("%d",&n)){
		if(n==0)break;
		while(1){
			int val;
			stack<int> B;
			stack<int> E;
			scanf("%d",&val);
			if(val==0) {
				printf("\n");
				break;
			}
			B.push(val);
			for (int i = 1; i < n; ++i)
			{	scanf("%d",&val);
				B.push(val);
			}
			int k=n;
			while(!B.empty()) {
				if(B.top()==n) B.pop(),n--;
				else if(!E.empty() && E.top()==n) E.pop(),n--;
					else E.push(B.top()),B.pop();  
			}
			while(!E.empty()){
				if(E.top()!=n) break;
				n--;
				E.pop();
			}	
			if(B.empty() && E.empty() && n==0) printf("Yes\n");
			else printf("No\n");
			n=k;
		}
	}

	return 0;
}



					/*
					12345

					5421

					34521
					123
					  4
					  5
					54123
					*/