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
char st[6][6],backup[6][6];
int dx[5]={-1,0,0,1,0},dy[5]={0,0,1,0,-1};
void turn(int x,int y){
	for(int i=0;i<5;i++){
		int x2=x+dx[i],y2=y+dy[i];
		if(x2<0 || x2>4 || y2<0 || y2>4 ) continue;
		if(st[x2][y2]=='0'){
			st[x2][y2]='1';
		}else st[x2][y2]='0';
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int res=10;
		for(int i=0;i<5;i++) cin>>st[i];
		memcpy(backup,st,sizeof st);
			for(int op=0;op<32;op++){
				int step=0;
				
				for(int j=0;j<5;j++){
					if(op>>j&1){
						turn(0,j);
						step++;
					}
				}
				
				
				for(int j=1;j<=4;j++){
					for(int k=0;k<5;k++){
						if(st[j-1][k]=='0'){
							turn(j,k);
							step++;
						}
					}
				}
				bool d=0;
				for(int k=0;k<5;k++){
					if(st[4][k]=='0'){
						d=1;
						break;
					}
				}
				if(!d) {
					res=min(res,step);
				}
				memcpy(st,backup,sizeof backup);

			}
		if(res<6)cout<<res<<endl;
		else cout<<"-1"<<endl;
	}
}


