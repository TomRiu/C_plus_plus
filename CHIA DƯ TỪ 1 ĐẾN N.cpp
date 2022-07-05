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
		ll n, k;
		cin >> n >> k;
		ll sum = 0;
		sum = k * (k - 1) / 2;
		sum *= floor(n / k);
		ll tmp = floor(n / k) * k;
		sum += (((n - tmp) + 1) * (n - tmp) / 2); 
		cout << sum << endl;
	}
	return 0;
}