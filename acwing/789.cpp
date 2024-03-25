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
            if (a[mid] < x)  l = mid + 1;//当a[mid] < x时。因为要求>=x的第一个，故排除<=mid的
            else    r = mid;
        }
        if (a[l] != x) {//>=x的第一个不是x，x不存在
            printf("-1 -1\n");
            continue;
        }
        int l1 = l, r1 = n-1;//l为第一个x、r1=n
        while (l1< r1) {
            int mid = l1 + r1 >> 1;
            if (a[mid] > x)  r1 = mid;//>x的第一个or=x的最后一个 
            else    l1 = mid+1;
        }
        printf("%d %d\n", l, a[l1]==x?l1:l1-1);
    }
    return 0;
}

