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
	float n; cin >> n;
	double res = 0;
	for(int i = 1; i <= n; i++) res += (float) 1 / i;
	cout << setprecision(4) << fixed << res;
	return 0;
}
