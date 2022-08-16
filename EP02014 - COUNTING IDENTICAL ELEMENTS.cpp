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
		long long n, a[105][105];
		cin >> n;
		int f[100005] = {}, cnt = 0;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin >> a[i][j];
				if(f[a[i][j]] == i)
				{
					f[a[i][j]]++;
				}
			}
		}
		for(int j = 0; j < n; j++)
		{
			if(f[a[0][j]] == n) 
			{
				cnt++;
				f[a[0][j]] = 0;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
