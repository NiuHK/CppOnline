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

int main(){
	int height,n;
	cin>>n;
	for(int i=0;i<n;i++){
	double real;
	cin>>height>>real;
	real/=2;
	double weight=(height-100)*0.9;
	if(abs(real-weight)<weight*0.1) cout<<"You are wan mei!"<<endl;
	else if((real-weight)<0) cout<<"You are tai shou le!"<<endl;
	else if((real-weight)>0) cout<<"You are tai pang le!"<<endl;
	}
}

