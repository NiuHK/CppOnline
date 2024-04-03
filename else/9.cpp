#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <algorithm>
#include <set>
#include <vector>
typedef long long ll;
using namespace std;
const int N=100010;
int main(){
 ll n;
    ll t;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>t;
    switch (t){
    case 0 : {
    	cout<<"No"<<endl;
		break;
	}
    case 1 : {
    	cout<<"No"<<endl;
		break;
	}
    case 2 :  {
    	cout<<"Yes"<<endl;
		break;
	}
    default :{
    	ll j;
        for(j=2;j<sqrt(t)+1;j++){
            if(t%j==0){
                
                break;
            }
            
        }
      if (j>=sqrt(t)+1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    	
		break;
	}
}
}
   

}
