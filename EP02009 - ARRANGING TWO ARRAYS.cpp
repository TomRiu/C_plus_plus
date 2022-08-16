#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	test()
	{
		int n, m;
		cin >> n >> m;
		int a1[100005], a2[100005], f[100005] = {};
		for(int i = 0; i < n; i++) 
		{
			cin >> a1[i];
			f[a1[i]]++;
		}
		for(int i = 0; i < m; i++) cin >> a2[i];
		int res[100005];
		int idx = 0;
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < f[a2[i]]; j++)
			{
				res[idx++] = a2[i];
			}
			f[a2[i]] = 0;
		}
		int s = idx;
		for(int i = 0; i < n; i++)
		{
			if(f[a1[i]] > 0) res[idx++] = a1[i];
		}
		sort(res + s, res + idx);
		for(int i = 0; i < idx; i++) cout << res[i] << ' ';
		cout << endl;
	}
	return 0;
}

