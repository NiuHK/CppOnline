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

int main(){
int birth,n;
set<int> count;
cin>>birth>>n;
int l=birth,y;
while(1){
//	if(l==2014) break;
	y=l;
	count.clear();
	count.insert(y%10);
	y/=10;
	count.insert(y%10);
	y/=10;
	count.insert(y%10);
	y/=10;
	count.insert(y%10);
	y/=10;
//	cout<<l<<' '<<count.size()<<endl;
	if(count.size()==n) break;
	l++;
}
cout<<l-birth<<" ";
cout<<setw(4)<<setfill('0')<<l;
}

