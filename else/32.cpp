#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#include<istream>

using namespace std;

typedef long long ll;
const int N=100010;

int main(){
string str,u;
int len;
char c,y;
cin>>len>>c;
getchar();
getline(cin,str);
int l=len-str.size();
int s=str.size();
if(s >= len)
		for(int i =0-l; i < s; i ++ )
			cout << str[i];
else{

for(int i=0;i<l;i++){
	cout<<c;
}
cout<<str;
}
}

