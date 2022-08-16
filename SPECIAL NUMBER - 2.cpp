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
	test()
	{
		ll n, k, c, res = 0;
		cin >> n >> k;
		c = 1;
		while(k){
			if(k % 2 == 1)
			{
				res += c;
				res %= MOD;
			}
			c *= n;
			c %= MOD;
			k /= 2;
		}
		cout<< res << endl;
	}
}
