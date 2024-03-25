#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include<algorithm>
#include<sstream>
#include<vector>
#include<set>

using namespace std;

typedef long long ll;
const int N=100010;

int main(){
	int n;
	vector<int> db;
	cin>>n;
	for(int i=0 ;i<n;i++){
		int n2;
		cin>>n2;
		for(int j=0;j<n2;j++){
			int tmp;
			cin>>tmp;
			db.push_back(tmp);
		}
	}
	db.push_back(1001);
	
	sort(db.begin(),db.end());
	int max=0,num=0,tn=0,t=0;
	for(auto it=db.begin();it!=db.end();it++){
		if(*it!=t) {
			if(num<tn){
				max=t;
				num=tn;
			}else if(num==tn){
				if(max<t){
					max=t;
					num=tn;
//					cout<<"swap"<<max<<" "<<t;
				}
			}
			tn=1;
			t=*it;	
		}else{
			tn++;
		}
	}
		
	cout<<max<<" "<<num;
}

