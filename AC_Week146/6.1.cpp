#include<iostream>
#include<cmath>
#include<cstring>
#include<iomanip>
#include<algorithm>
#include<map>
#include<vector>
#include<set>

using namespace std;

const int M=9;

typedef long long ll;
int vis[M+1],bak[M+1];
int N,an,cn,A=0,C=0,counts=0;
void dfsc(int);
void check(){
	int B=(N-A)*C;
	if(B>0){
		int bn=0,b=B;
		memcpy(bak,vis,sizeof vis);
		
		while(b){
			int bs=b%10;
			if(bs >0 && bs<= M) {
				if(bak[bs]) return ;
				
				bak[bs]=1;
			}else{
				return;
			}
			bn++;
			b/=10;
		}
		if(an+bn+cn==M){
			
			int ju=1;
			for(int i=1;i<=M;i++) {
				if(!bak[i]){
					ju=0;
					return;
				}
			}
			counts++;
		}
	}
}
void dfsa(int n){
	if(n==0){
		for(int i=1;i<M+1-an;i++){
			cn=i;
			dfsc(i);
		}
		return;
	}
	for(int i=1;i<M+1;i++){
		if(!vis[i]){
			vis[i]=1;
			A=A*10+i;
			dfsa(n-1);
			A/=10;
			vis[i]=0;
		}	
	}
}
void dfsc(int n){
	if(n==0){
		check();
		return;
	}
	for(int i=1;i<M+1;i++){
		if(!vis[i]){
			vis[i]=1;
			C=C*10+i;
			dfsc(n-1);
			C/=10;
			vis[i]=0;
		}	
		
	}
}
int main(){
	cin>>N;
	for(int i=1;i<7;i++){
		an=i;
		dfsa(i);
	}
	cout<<counts;
}

