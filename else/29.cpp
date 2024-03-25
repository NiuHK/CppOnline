#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include<algorithm>
#include<map>
#include<deque>
#include<set>

using namespace std;

typedef long long ll;
const int N=100010;

struct st{
	int xb;
	string name;
};

int main(){
	int n;
	cin>>n;
deque<st> db;

	for(int i=0;i<n;i++){
		st tmp;
		cin>>tmp.xb>>tmp.name;
		db.push_back(tmp);
	}
	
	int co=0;
	for(auto i=db.begin();i!=db.end();i++){
		if(i->xb==3) continue;
		
		if(co==n/2) return 0;
		co++;
		cout<<i->name<<" ";
		
		for(auto it=db.rbegin();it!=db.rend();it++){
			if(it->xb == i->xb || it->xb==3 )  continue;
			
			cout<<it->name<<endl;
			
			it->xb=3;
			i->xb=3;
			break;
		}
	}
	

}
