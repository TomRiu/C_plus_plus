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
		ll n;
		cin >> n;
		for(long long i = 2; i <= sqrt(n); i++) 
		{
			if (n % i == 0)
			{
				long long t = 0;
				while(n % i == 0)
				{
					cout << i << " ";
					n /= i;
				}
			}
		}
		if(n > 1)
		{
			cout << n;
		}
		cout << endl;
	}
	return 0;
}

