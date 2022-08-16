#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	faster()
	int m, n, k;
	cin >> m >> n >> k;
	int a[105][105], b[10005], idx = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> a[i][j];
			if(j == k - 1) 
			{
				b[idx++] = a[i][j];
			}
		}
	}
	sort(b, b + idx);
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(j == k - 1) 
			{
				cout << b[i] << ' ';
			}
			else cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}

