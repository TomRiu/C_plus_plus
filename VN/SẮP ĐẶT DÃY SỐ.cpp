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
		int n;
		cin >> n;
		ll a[n];
		map<ll, ll> m;
		for(auto &i : a)
		{
			cin >> i;
			if(i >= 0) m[i]++;
		}
		for(int i = 0; i < n; i++)
		{
			if(m[i] <= 0) cout << -1;
			else cout << i;
			cout << ' ';
		}
		cout << endl;
	}
	return 0;
}  