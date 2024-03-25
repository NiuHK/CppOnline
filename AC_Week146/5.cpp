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
int n,m,n1=0;
int co[N];
bool vis[N]={0};
void dfs(int c,int start){
	if(c>m) {
		for(int i=0;i<m;i++){
			cout<<co[i]<<" ";
		}
		cout<<endl;
		return;
	}
	
	for(int i=start;i<n+1;i++){
		if(!vis[i]){
			co[n1++]=i;
			vis[i]=1;
			dfs(c+1,i);
			vis[i]=0;
			n1--;
		}
	}
	
}
int main(){
	cin>>n>>m;
	dfs(1,1);
}

