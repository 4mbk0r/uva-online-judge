#include "bits/stdc++.h"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	while(scanf("%d",&n),n!=0){
		int a[n];
		while(1){
			int v;
			scanf("%d",&v);
			if(v==0){
				printf("\n");
				break;
			}
			a[v-1]=1;
			for (int i = 1; i < n; ++i)
			{
				scanf("%d",&v);
				a[v-1]=i+1;
			}
			int va=INT_MAX;
			int vb=INT_MAX;
			bool sw=true;
			for (int i = 0;sw && i < n; ++i){
				if(va>a[i]) va=a[i];
				else if(vb>a[i]) vb=a[i];
					else sw=false;
			}
			if(sw) printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
}