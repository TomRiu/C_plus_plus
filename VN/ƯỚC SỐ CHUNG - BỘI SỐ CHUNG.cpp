#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;
 
long long lcm(long long a, long long b)
{
	long long n = a * b;
	long long m = __gcd(a, b);
	return n / m;
}

int main()
{
	faster()
	test()
	{
		ll a, b;
		cin >> a >> b;
		cout << lcm(a, b) << " " << __gcd(a, b) << endl;
	}
	return 0;
}
