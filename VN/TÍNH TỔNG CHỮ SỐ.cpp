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
	test()
	{
		ll n, tmp = 0;
		cin >> n;
		while(n > 9)
		{
			while(n)
			{
				tmp += n % 10;
				n /= 10;
			}
			n = tmp;
			tmp = 0;
		}
		cout << n << endl;
	}
	return 0;
}
