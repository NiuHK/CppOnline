#include <iostream>
using namespace std;
const int maxn = 100005;
int n, q, x, a[maxn];
int main() {
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; i++)    scanf("%d", &a[i]);
    while (q--) {
        scanf("%d", &x);
        int l = 0, r = n - 1;
        while (l < r) {
            int mid = l + r >> 1;
            if (a[mid] < x)  l = mid + 1;//��a[mid] < xʱ����ΪҪ��>=x�ĵ�һ�������ų�<=mid��
            else    r = mid;
        }
        if (a[l] != x) {//>=x�ĵ�һ������x��x������
            printf("-1 -1\n");
            continue;
        }
        int l1 = l, r1 = n-1;//lΪ��һ��x��r1=n
        while (l1< r1) {
            int mid = l1 + r1 >> 1;
            if (a[mid] > x)  r1 = mid;//>x�ĵ�һ��or=x�����һ�� 
            else    l1 = mid+1;
        }
        printf("%d %d\n", l, a[l1]==x?l1:l1-1);
    }
    return 0;
}

