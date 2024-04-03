#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

const int N = 6;
int dx[N] = {-1, 0, 1, 0, 0}, dy[N] = {0, 1, 0, -1, 0};
char st[N][N], backup[N][N];


void turn (int x, int y)
{
    for (int i = 0; i < 5; i ++ )
    {
        int a = x + dx[i], b = y + dy[i];

        //如果在边界外边，直接忽略即可
        if (a < 0 || a >= 5 || b < 0 || b >= 5) continue;

        st[a][b] ^= 1;   //异或，不同的时候就变成相反的数
    }

}
int main(){
	int T;
	cin>>T;
	while(T--){
		int res=10;
		for(int i=0;i<5;i++) cin>>st[i];
        for (int op = 0; op < 32; op ++ ){
			int step=0;			
            for (int i = 0; i < 5; i ++ )
                if (op >> i & 1)  // 数字2 对应了 00010 表示第2个位置的按一下
                                  // 00010 >> 1 & 1  是1 所以turn(0, 1) 就是第一行第二个位置
                {                 // 数字3 对应了00011 表示第1 和第2个位置的按一下
                    step ++ ;
                    turn (0, i);;
                }
            for (int i =0; i < 4; i ++ )
                for (int j = 0; j < 5;j ++ )
                    if (st[i][j] == '0')
                    {
                        step ++;
                        turn (i + 1, j);  // 如果这个位置是灭的，就按下一行对应的位置
                    }
             bool dark = false;
            for (int j = 0; j < 5; j ++ )
                if (st[4][j] == '0')
                {
                    dark = true;
                    break;
                }
			if (!dark) res = min(res, step);

		}
		cout<<res<<endl;
	}
}


