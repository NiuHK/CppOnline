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

int get(string t)
{
	for(char ch:t)
		if(ch<'0'||ch>'9')
			return -1;
	int rtn=stoi(t);
	
	return rtn>=1&&rtn<=1000?rtn:-1;
}

int main()
{
	string a,b;
	getline(cin,a,' ');
	getline(cin,b,'\n');
	int ta=get(a);
	int tb=get(b);
	cout<<(ta==-1?"?":a);
	cout<<" + ";
	cout<<(tb==-1?"?":b);
	cout<<" = ";
	if(ta==-1||tb==-1)
		cout<<"?";
	else
		cout<<ta+tb;
	
	return 0;
}

