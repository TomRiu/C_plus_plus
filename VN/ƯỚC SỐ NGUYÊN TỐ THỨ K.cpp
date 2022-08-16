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
		ll n, k;
		cin >> n >> k;
		int a[n];
		int idx = 0;
		for(long long i = 2; i <= sqrt(n); i++) 
		{
			if (n % i == 0)
			{
				while(n % i == 0)
				{
					a[idx++] = i;
					n /= i;
				}
			}
		}
		if(n > 1)
		{
			a[idx++] = n;
		}
		if(k - 1 >= idx) cout << -1 << endl;
		else cout << a[k - 1] << endl;
	}
	return 0;
}


