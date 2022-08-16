#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;
int main()
{
	faster()
	int n;
	cin >> n;
	int a[25] = {};
	ll tgt[25] = {};
	a[1] = 1;
	for(int i = 2; i <= 20; i++)
	{
		a[i] = a[i - 1] * i; 
	}
	tgt[1] = 1;
	for(int i = 2; i <= 20; i++)
	{
		tgt[i] = tgt[i - 1] + a[i];
	}
	cout << tgt[n];
	return 0;
}
