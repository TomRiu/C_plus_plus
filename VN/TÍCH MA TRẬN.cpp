//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;


int main()
{ 
	faster()
	int n, m, p;
	cin >> n >> m >> p;
	int a[n][m], b[m][p];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
	for(int i = 0; i < m; i++)
		for(int j = 0; j < p; j++)
			cin >> b[i][j];
	int res[n][n] = {};
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			for(int z = 0; z < m; z++)
			{
				res[i][j] += a[i][z] * b[z][j]; 
			}
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}  