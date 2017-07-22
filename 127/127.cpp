#include "bits/stdc++.h"
using namespace std;
vector< stack < pair<char,char> > > cards(52);
void linea(string a,int &total){
	for (int i = 0; i < a.size(); i++)
	{
		if(a[i]!=' '){
			pair<char,char> aux(a[i],a[i+1]);
			i++;
			cards[total++].push(aux);
		}
	}
}
bool canmove(int m,int n){
	if(m-n<0) return false;
	return cards[m].top().first==cards[m-n].top().first || cards[m].top().second==cards[m-n].top().second;
}
void move(int m,int n){
	cards[m-n].push(cards[m].top());
	cards[m].pop();
	if(cards[m].empty()) cards.erase(cards.begin()+m);
}
void jugar(){
	volver:
	for (int i = 0; i < cards.size(); ++i)
	{
		if( canmove(i,3) ){move(i,3);goto volver;}
		if( canmove(i,1) ){move(i,1);goto volver;}
	}
}
int main(int argc, char const *argv[])
{
	string a,b;
	while(1){
		int total=0;
		getline(cin,a);
		if(a[0]=='#') break;
		linea(a,total);
		getline(cin,b);
		linea(b,total);
		jugar();
		total=cards.size();
		if(total>1) printf("%d piles remaining:",total);
		else printf("%d pile remaining:",total);
		for(int i=0;i<cards.size();i++){
			int s= cards[i].size();
			printf(" %d",s);
		}
		printf("\n");
		cards.clear();
		cards.resize(52);

	}
	return 0;
}