#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<int>v1;
vector<int>v2;

int main() {
    int x;
    scanf("%d",&x);
    bool st=1;
    int t=x;

    for (int i = 2; i <= sqrt(x)+1; ++i) {
        for (int j = i; j <=sqrt(x)+1 ; ++j) {
            if (t%j==0)
            {
                t/=j;
                if (st==1)
                {
                    v1.push_back(j);
                }
                else{
                    v2.push_back(j);
                }
            }
            else{
                //代表遇到不能整除的了就得打断
                if (!v1.empty())
                    st=0;

                if (v2.size()>v1.size())
                {
                    v1=v2;
                }
                v2.clear();
                t=x;
                break;
            }
        }
    }
    if (v1.empty())
    {
     cout<<"1"<<endl;
     cout<<x<<endl;
        return 0;
    }
    cout<<v1.size()<<endl;
    for (int i = 0; i < v1.size(); ++i) {
       if (i==0)
           cout<<v1[i];
       else cout<<"*"<<v1[i];
    }
}

