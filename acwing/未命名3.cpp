#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include<algorithm>
#include<map>
#include<vector>
#include<set>

using namespace std;

typedef long long ll;
const int N=100010;
set<string> st;
string s;
void dfs(int n){
	if(n>=5){
		cout<<s.substr(n-1,2)<<endl;
		dfs(n-2);
	}else if(n>=7){
		cout<<s.substr(n-2,3)<<endl;
		dfs(n-3);
	}
}
int main(){
	int free=0;
	cin>>s;
	int n;
	n=s.length();
	dfs(n-1);
	for(set<string>::iterator it=st.begin();it!=st.end();it++){
		cout<<*it<<endl;
}

}

