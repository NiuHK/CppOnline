#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include<algorithm>
#include<map>
#include<vector>
#include<set>

using namespace std;
#define endl '\n'
typedef long long ll;
const int N=100010;
set<string> st;
string s,t;
void dfs(int n){
	if(n>=6){
		t=s.substr(n-1,2);
		if(st.find(t)==st.end()){
		st.insert(t);
//		cout<<t<<endl;
		dfs(n-2);	
		}
		
	}
	if(n>=7){
		t=s.substr(n-2,3);
		if(st.find(t)==st.end()){
		st.insert(t);
//		cout<<t<<endl;
		dfs(n-3);
	}
	}
	return ;
}
int main(){
	int free=0;
	cin>>s;
	int n;
	n=s.length();
//	cout<<s.substr(n-2,n);
	dfs(n-1);
	cout<<st.size()<<endl;
	for(auto it=st.begin();it!=st.end();it++){
		cout<<*it<<endl;
}

}

