#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<vector>
#include<stack>
#include<queue>
#include<sstream>

using namespace std;
typedef long long ll;
const int N=100010;

int main()
{
	string a;
	getline(cin, a);
	bool flaga = false, flagb = false;
	int aa = 0, bb = 0;
	int flag = 0;
	for(int i = 0; i < a.size(); i ++ )
	{
		if(a[i] == ' ') flag = i;
		if(flag > 0) break;
	}
	for(int i = 0; i < flag; i ++ )
	{
		aa = aa * 10 + (a[i] - '0');
		if(a[i] < '0' || a[i] > '9')
		{
			flaga = true;
			break;
		}
	}
	int flag1 = 0;
	for(int i = flag + 1; i < a.size(); i ++ )
	{
		bb = bb * 10 + (a[i] - '0');
		if(a[i] < '0' || a[i] > '9')
		{
			flagb = true;
			break;
		}
	}
	if(aa > 1000 || aa < 1) flaga = true;
	if(bb > 1000 || bb < 1) flagb = true;
	if(flaga) cout << '?' << ' ';
	else cout << aa << ' ';
	cout << '+' << ' ';
	if(flagb) cout << '?' << ' ';
	else cout << bb << ' ';
	cout << '=' << ' ';
	if(flaga || flagb) cout << '?';
	else cout << aa + bb;
	return 0;
}




