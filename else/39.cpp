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
char db[110][110];

int main(){
string str;
int n;
cin>>n;
getchar();
getline(cin,str);
int len=str.size();
if(n>1 && len%n) 
	for(int i=0;i<n-len%n;i++){
		str+=' ';
	}
	int len2=str.size(),count=0;
	for(int x=0;x<len2/n;x++){
		for(int y=0;y<n;y++){
			db[x][y]=str[count];
			count++;
		}
	}
//	cout<<len2;
	for(int y=0;y<n;y++){
		for(int x=len2/n-1;x>=0;x--){
			cout<<db[x][y];
		}
		cout<<endl;
	}

}

