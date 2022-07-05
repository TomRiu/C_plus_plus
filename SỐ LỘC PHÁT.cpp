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
		int n, check = 0;
		cin >> n;
		while(n)
		{
			if(n % 10 != 0 && n % 10 != 6 && n % 10 != 8)
			{
				check = 1;
				cout << "NO" << endl;
				break;
			}
			n /= 10;
		}
		if(check == 0) cout << "YES" << endl;
	}
	return 0;
}
