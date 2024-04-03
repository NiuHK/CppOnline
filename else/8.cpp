#include<iostream>
#include<cmath>
#include<string>
#include <iomanip>
#include<algorithm>
#include<set>

using namespace std;
typedef long long ll;
const int N=100010;
int main(){
string in;
cin>>in;
set<int> arr;
vector<int> index;
for(char sg : in){
	arr.insert(sg-48);
//	cout<<sg<<endl;
}

for(char sg : in){
	int count=0;
for(auto it=arr.rbegin();it!=arr.rend()++;it++){
	if(*it==sg-48) {
	index.push_back(count);
	break;
	}
	count++;
}
}


//for(char sg : in){
//	int count=0;
//for(set<int>::iterator it=arr.end();it!=arr.begin();it++){
//	if(*it==sg) index.push_back(count);
//	count++;
//}
//}
cout<<"int[] arr = new int[]{";
for(auto it=arr.rbegin();it!=arr.rend();it++) {
	cout<<*it;
	if(it!=--arr.rend()) cout<<',';
}
cout<<"};";

cout<<endl;
int cou=0;
cout<<"int[] index = new int[]{";
for(int l1 : index) {
cout<<l1;	
cou++;
if (cou<11) cout<<',';
}
cout<<"};";
}

