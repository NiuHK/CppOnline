#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 计算模式串的next数组
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

// KMP算法实现字符串匹配
int KMP(const string& text, const string& pattern) {
    int n = text.length(), m = pattern.length(); // 获取文本串和模式串的长度
    vector<int> next; // 定义next数组
    getNext(pattern, next); // 计算模式串的next数组
    int i = 0, j = 0; // 初始化两个指针i和j
    while (i < n && j < m) { // 遍历文本串和模式串
        if (j == -1 || text[i] == pattern[j]) { // 如果j为-1或者当前位置的字符与j位置的字符相同
            ++i; // i向前移动一位
            ++j; // j向前移动一位
        }
        else {
            j = next[j]; // 否则，j回溯到next[j]所指向的位置
        }
    }
    if (j == m) { // 如果j遍历完模式串，即找到了匹配的子串
        return i - m; // 返回子串在文本串中的起始位置
    }
    else { // 否则，如果i遍历完文本串还没有找到匹配的子串
        return -1; // 返回-1，表示没有找到匹配
    }
}

int main() {
    string text = "ABC ABCDAB ABCDABCDABDE"; // 定义文本串
    string pattern = "ABCDABD"; // 定义模式串
    int pos = KMP(text, pattern); // 调用KMP函数进行匹配
    if (pos == -1) { // 如果返回值为-1
        cout << "No match found" << endl; // 输出"No match found"
    }
    else { // 否则
        cout << "Match found at position " << pos << endl<<text[pos]; // 输出匹配的位置
    }
    return 0;
}