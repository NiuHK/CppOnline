#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

typedef long long ll;
const int M=9;//9
int N,an=0,cn=0;//a
int A,C,total;
int st[M+1]={-1},nst=0;
int vis[M+1]={0},ba[M+1];
void dfsc(int n);

void dfsa(int n)
{
	if(n==0){
//		for(int i=0;i<nst;i++){
//			cout<<st[i]<<" ";
//		}
//		cout<<endl;

//			for( int i=1;i<=M;i++){
//			cout<<vis[i]<<" ";
//			}
//			cout<<A<<endl;
			
		for(int i=1;i<=M-an;i++){
//			cout<<i<<":\n";
			dfsc(i);
//			cout<<endl;

		}
		return;
	}
	an++;
	for(int i=1;i<=M;i++){
		if(!vis[i]){
			vis[i]=1;
			st[nst++]=i;
			A=A*10+i;
			dfsa(n-1);
			st[nst--]=-1;
			A/=10;
			vis[i]=0;
		}
	}
	an--;
	
}

void dfsc(int n){
	if(n==0){
		int b=(N-A)*C;
		int t=b,bn=0;
		memcpy(ba,vis,sizeof vis);
		while(t){
			bn++;
			int b1=t%10;
			if(b1>0 && b1 <=M) ba[b1]=1;
			t/=10;				
		}		
		if(b>0)
		if(cn+an+bn==M){
//			cout<<"num r"<<endl;
//			cout<<A<<" "<<b<<" "<<C<<endl;
////
//			int i;
//			for( i=1;i<=M;i++){
//				cout<<ba[i]<<" ";
//			}
//		cout<<"\n";

////			cout<<C<<endl<<"-----------"<<endl;
//			
			int i;
			for( i=1;i<=M;i++){
				if(!ba[i]) break;
			}
			if (i==M+1) total++;

		}
//		cout<<an<<" "<<bn<<" "<<cn<<endl<<endl;
		return;
	}
	cn++;
	for(int i=1;i<=M;i++){
		if(!vis[i]){
			vis[i]=1;
			st[nst++]=i;
			C=C*10+i;
			dfsc(n-1);
			vis[i]=0;
			C/=10;
			st[nst--]=-1;
		}
	}
	cn--;
}
int main(){
	cin>>N;
	for(int i=1;i<=M;i++){
		dfsa(i);
	}
	cout<<total;
}

