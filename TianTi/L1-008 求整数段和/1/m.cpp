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
const int N=1010;

int main()
{
	int a, b;
	cin >> a >> b;
	int sum = 0;
	int count = 0;
	for(int i = a; i <= b; i ++ )
	{
		count ++ ;
		printf("%5d",i);
		sum += i;
		if(count % 5 == 0) cout << endl;
	}
    if((b - a + 1) % 5 != 0) cout << endl;
	cout << "Sum = " << sum << endl;
	return 0;
}



