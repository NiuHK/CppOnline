#include <iostream>
#include <iomanip>
#include <set>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
	//set<int> appear;
	unordered_map<int,bool> havFriend;
	int n;
	cin>>n;
	for(int i=n;i--;)
	{
		int k;
		cin>>k;
		set<int> circle;
		for(int j=k;j--;)
		{
			int t;
			cin>>t;
			circle.insert(t);
			//appear.insert(t);
		}
		if(circle.size()>=2)
			for(int x:circle)
				havFriend[x]=1;	
	}
	cin>>n;
	vector<int> vec;
	set<int> check;
	for(int i=n;i--;)
	{
		int t;
		cin>>t;
		if(check.count(t))
			continue;
		if(!havFriend[t])
			vec.push_back(t);
		check.insert(t);
	}
	if(vec.empty())
		cout<<"No one is handsome";
	for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
		cout<<setw(5)<<setfill('0')<<(*it)<<" \n"[it+1==vec.end()];
	
	return 0;
}
