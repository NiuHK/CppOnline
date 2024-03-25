#include<iostream>
#include<cmath>
#include<string>
#include <iomanip>
#include<algorithm>
#include<set>
#include<vector>

using namespace std;
int main(){
int n;
set<int> db;
vector<int> is_in;
cin>>n;
for(int i=n;i>0;i--){
	int count,t;
	cin>>count;
	if(count>1){
		for(int j=0;j<count;j++){
			cin>>t;
			db.insert(t);
		}
	}else cin>>t;
}

int n2;
cin>>n2;
for(int i=0;i<n2;i++){
	int t;
	cin>>t;
	if(!db.count(t) && find(is_in.begin(),is_in.end(),t)==is_in.end() ) is_in.push_back(t);
}


for(vector<int>::iterator it=is_in.begin();it !=is_in.end();it++){
//	string out=(it+1)==is_in.end()?'\n':' '
	cout<<setw(5)<<setfill('0')<<(*it)<<(it+1==is_in.end()?'\n':' ');
}
if(!is_in.size())cout<<"No one is handsome";
}
