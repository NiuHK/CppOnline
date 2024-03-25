#include<iostream>
#include<cmath>
#include<string>
#include <iomanip>
#include<algorithm>

using namespace std;
int st[100000]={0};
int st1[100000]={0};

int main(){ 
int u;
int n1,c=0,c1=0;
cin>>n1;
for(int i=0;i<n1;i++){
	int n2;
	cin>>n2;
	if(n2>1)
	for(int j=0;j<n2;j++) cin>>st[c++];	
	else cin>>u;
}


int n3;
cin>>n3;
for (int j=0;j<n3;j++){
int t;
bool isin=0;
cin>>t;
for(int i=0;i<c;i++){
if(t==st[i]) {
	isin=1;
	break;
}
}
if( !isin){
		int i1;
	for (i1=0;i1<c1;i1++)
	if (t==st1[i1]) break;
	if(i1==c1) st1[c1++]=t;
}
}

	int i1;
	for (i1=0;i1<c1-1;i1++){
//		cout<<st1[i1]<<" ";
		 printf("%05d ", st1[i1]);
	}
	if(c1>0)
//		cout<<st1[i1];
		 printf("%05d", st1[i1]);

	if(!c1) cout<<"No one is handsome";
cout<<endl;
}
