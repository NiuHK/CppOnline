#include<iostream>
#include<cmath>
#include<string>
#include <iomanip>
#include<algorithm>

using namespace std;
int main(){
int n,j=0,o=0;
string c;
cin>>n;
for(int i=0;i<n;i++){
	cin>>c;
	if((c[c.size()-1]-48)%2) j++;
	else o++;
}
cout<<j<<" "<<o<<' ';
}

