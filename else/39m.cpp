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
	int n;
	string a;
	cin >> n;
	getchar();
	getline(cin, a);
	int len = a.size();
	int ll;
	if(len / n * n != len) ll = (len / n + 1) * n;
	else ll = len;
	for(int i = len; i < ll; i ++ ) a += ' ';
	char p[110][110];
	int cow = ll / n;
	int row = n;
	int k = 0;
	for(int i = cow - 1; i >= 0; i -- )
		for(int j = 0; j < row; j ++ )
			p[j][i] = a[k ++ ];
	for(int i = 0; i < row; i ++ )
	{
		for(int j = 0; j < cow; j ++ )
			cout << p[i][j];
		cout << endl;
	}
	return 0;
}




