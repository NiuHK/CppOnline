#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include<algorithm>
#include<deque>
#include<vector>
#include<set>

using namespace std;

typedef long long ll;
const int N=100010;
int main(){
string str;
int n,count=0;
cin>>n;
getchar();
getline(cin,str);
int sz=str.length();
vector<vector<char> > db;
while(1){
	if(count>=sz) break;
	vector<char> tmp;
	for(int i=0;i<n;i++){
		if(count<sz){
			tmp.push_back(str[count]);
		count++;	
		}else{
			tmp.push_back(' ');
		}
	}	
	db.push_back(tmp);
}

for(int ct=0;ct<=sz/n+1;ct++){
	for(auto it=db.rbegin();it!=db.rend();it++){
	cout<<(*it)[ct];
	}
	cout<<"\n";
}
}

