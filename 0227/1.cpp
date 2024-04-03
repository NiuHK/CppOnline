#include<iostream>
#include<cmath>
#include<string>
#include <iomanip>
#include<algorithm>

using namespace std;
typedef long long ll;
ll z1[100]={0};
ll m1[100]={0};

int main(){ 
int n;
cin>>n;
ll z=0,m=0;
for (int i=0;i<n;i++){
	scanf("%lld/%lld",&z1[i],&m1[i]);
}
m=m1[0];
for (int i=0;i<n;i++){
	ll ma=__gcd(m,m1[i]);
	z=z*m1[i]/ma+z1[i]*m/ma;
	m=m*m1[i]/ma;
	ma=__gcd(m,z);
	m/=ma;
	z/=ma;

}
ll zs=z/m;
z-=zs*m;
if(zs!=0)
{
		cout<<zs;
	if(z!=0)	{
		cout<<" "<<z<<"/"<<m;
	}
}else{
	if(z!=0)	cout<<z<<"/"<<m;
	else cout<<0;
	
}
}
