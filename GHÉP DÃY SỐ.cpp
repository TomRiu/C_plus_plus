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
	test()
	{
		int k, n;
		cin >> k >> n;
		int a[k][n];
		vector<int> v;
		for(int i = 0; i < k; i++)
		{
			for(int j = 0; j < n; j++) 
			{
				cin >> a[i][j];
				v.push_back(a[i][j]);
			}
		}
		sort(v.begin(), v.end());
		for(auto i : v) cout << i << ' ';
		cout << endl;
	}
	return 0;
}  