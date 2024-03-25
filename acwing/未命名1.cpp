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
int n,o=0,j=0;
cin>>n;
int t;
for(int i=0;i<n;i++){
	cin>>t;
	if(t&1) o++;
	else j++;
}
if(o==j)cout<<"Yes";
else cout<<"No";

}

