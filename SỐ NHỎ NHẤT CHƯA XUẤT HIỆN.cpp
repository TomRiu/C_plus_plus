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
		int n, Min = 1;
		cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		sort(a, a + n);
		for(int i : a) if(i == Min) Min++;
		cout << Min << endl;
	}
	return 0;
}