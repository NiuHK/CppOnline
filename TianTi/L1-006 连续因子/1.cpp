#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
int main(){
	int num,t,count=0;
	cin>>num;
	vector<int> once;
	vector<int> best;
	for(int i=2;i<=sqrt(num)+1;i++){
		t=num;
		for(int j=i;j<=sqrt(num)+1;j++){
			if(t%j==0){


				once.push_back(j);


				t/=j;
			}
			else{
				// if(t)
					// once.clear();
				break;
			}
		}
		if(count<once.size()){
		best=once;
		count=once.size();
	}
	
	once.clear();
	}
    if (best.empty())
    {
     cout<<"1"<<endl;
     cout<<num<<endl;
        return 0;
    }
	cout<<count<<endl;
	for(int k=0;k<best.size();k++) {
		if(k==0)cout<<best[k];
		else
		cout<<"*"<<best[k];
		}
	cout<<endl;	
}
