#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include<algorithm>
#include<map>
#include<vector>
#include<sstream>

using namespace std;

typedef long long ll;
const int N=100010;

int main(){
vector<int> db;
string s;
getline(cin,s);
stringstream c(s);
int i;
while(c>>i)	db.push_back(i);
int count=1;
for(auto it=db.begin();it!=db.end();it++){
	if(*it==250){
		cout<<count;
		break;
	}
	count++;
}
}

