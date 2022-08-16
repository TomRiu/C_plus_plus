#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	faster()
	test()
	{
		int n, m, k;
		cin >> n >> m >> k;
		int a[105][105];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> a[i][j];
		int f[10005] = {};
		int hang = 0, cot = 0, i, idx = 0;
		while(hang < n && cot < m)
		{
			for(i = cot; i < m; i++)
			{
				f[idx++] = a[hang][i];
			}
			hang++;
			for(i = hang; i < n; i++)
			{
				f[idx++] = a[i][m - 1];
			}
			m--;
			if(hang < n)
			{
				for(i = m - 1; i >= cot; i--)
				{
					f[idx++] = a[n - 1][i];
				}
				n--;
			}
			if(cot < m)
			{
				for(i = n - 1; i >= hang; i--)
				{
					f[idx++] = a[i][cot];
				}
				cot++;
			}
		}
		cout << f[k - 1] << endl;
	}
	return 0;
}

