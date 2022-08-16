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
		map<int, int> m;
		int a[n];
		for(int &i : a)
		{
			cin >> i;
			m[i]++;
		}
		cout << (m[k] > 0 ? m[k] : -1) << endl;
	}
	return 0;
}  