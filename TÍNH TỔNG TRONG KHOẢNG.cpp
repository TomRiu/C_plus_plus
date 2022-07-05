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
			int n, k;
			cin >> n >> k;
			ll a[n];
			for(auto &i : a) cin >> i;
			while(k--)
			{
				int l, r;
				cin >> l >> r;
				l--; r--;
				ll sum = 0;
				for(int i = l; i <= r; i++)
				{
					sum += a[i];
				}
				cout << sum << endl;
			}
		}
		return 0;
	} 