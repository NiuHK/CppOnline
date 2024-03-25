#include<iostream>
#include<sstream>

#include<cmath>
#include<string>
#include <iomanip>
#include<algorithm>
#include<map>

using namespace std;
int main(){
	vector<string>a;
string in,t;
int am=0,bm=0;
getline(cin,in);
std::istringstream in2(in);
while(in2){
	in2>>t;
	a.push_back(t);
}
//if(a.size()>3){
//	a[0]="?";
//	a[1]="?";
//}
for(char an : a[0]){
	if(an<'0' || an>'9'){
		a[0]="?";
		break;
	}
	am=am*10+an-48;
}
for(char an : a[1]){
	if(an<'0' || an>'9'){
		a[1]="?";
		break;
	}
	bm=bm*10+an-48;

}
if(am>1000 || am<1) a[0]="?";
if(bm>1000 || bm<1) a[1]="?";

if(a[0]=="?"||a[1]=="?")
cout<<a[0]<<" + "<<a[1]<<" = "<<"?";
else cout<<a[0]<<" + "<<a[1]<<" = "<<am+bm;

}

