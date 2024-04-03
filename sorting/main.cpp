#include <iostream>
#include <string>
#include <vector>
using namespace std;




void getNext(const string& pattern, vector<int>& next) {
    int n = pattern.length(); // 获取模式串的长度
    next.resize(n); // 调整next数组的大小
    next[0] = -1; // next数组的第一个元素设为-1
    int i = 0, j = -1; // 初始化两个指针i和j
    while (i < n - 1) { // 遍历模式串
        if (j == -1 || pattern[i] == pattern[j]) { // 如果j为-1或者当前位置的字符与j位置的字符相同
            ++i; // i向前移动一位
            ++j; // j向前移动一位
            next[i] = j; // 更新next数组
        }
        else {
            j = next[j]; // 否则，j回溯到next[j]所指向的位置
        }
    }
}

int main() {
    string a="abcdabcabcdabcdf";
     vector <int> b;
getNext(a,b);
for(int i=0;i<b.size();i++){
cout<<b[i]<<" ";
}
}