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
ll v[N][1000][2]={0};
int main(){
	int n,m,q;
	cin>>n>>m>>q;
		for(int j=1;j<=n;j++){
			for(int i=1;i<=m;i++){
				cin>>v[j][i][0];
				v[j][i][1]=v[j-1][i][1]+v[j][i-1][1]-v[j-1][i-1][1]+v[j][i][0];
			}
			
		}


	int x1,y1,x2,y2,count;
	for(int i=0;i<q;i++){
		count=0;
		cin>>x1>>y1>>x2>>y2;
		ll count=v[x2][y2][1]-v[x2][y1-1][1]-v[x1-1][y2][1]+v[x1-1][y1-1][1];
		cout<<count<<endl;
	}
}

