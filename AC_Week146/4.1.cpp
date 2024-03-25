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

        //����ڱ߽���ߣ�ֱ�Ӻ��Լ���
        if (a < 0 || a >= 5 || b < 0 || b >= 5) continue;

        st[a][b] ^= 1;   //��򣬲�ͬ��ʱ��ͱ���෴����
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
                if (op >> i & 1)  // ����2 ��Ӧ�� 00010 ��ʾ��2��λ�õİ�һ��
                                  // 00010 >> 1 & 1  ��1 ����turn(0, 1) ���ǵ�һ�еڶ���λ��
                {                 // ����3 ��Ӧ��00011 ��ʾ��1 �͵�2��λ�õİ�һ��
                    step ++ ;
                    turn (0, i);;
                }
            for (int i =0; i < 4; i ++ )
                for (int j = 0; j < 5;j ++ )
                    if (st[i][j] == '0')
                    {
                        step ++;
                        turn (i + 1, j);  // ������λ������ģ��Ͱ���һ�ж�Ӧ��λ��
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


