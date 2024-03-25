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
ll s[N][2];
int main(){
	int n,m;
	cin>>n>>m;
	cin>>s[1][0];
	s[1][1]=s[1][0];
	for(ll i=2;i<=n;i++){
		cin>>s[i][0];
		s[i][1]=s[i][0]+s[i-1][1];
	}
	int l,r;
	
//	while(cin>>l)
//	cout<<s[l][1];
	
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		cout<<s[r][1]-s[l-1][1]<<endl;
	}

}

