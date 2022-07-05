//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
	faster()
	test()
	{
		int n;
		cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		sort(a, a + n);
		int Min = 1e9;
		for(int i = 1; i < n; i++)
		{
			if(a[i] - a[i - 1] < Min) Min = a[i] - a[i - 1];
		}
		cout << Min << endl;
	}
	return 0;
}