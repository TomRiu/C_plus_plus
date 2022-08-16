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
		string s;
		cin >> s;
		int check = 0;
		for(int i = 0; i < s.size() - 1; i++)
		{
			if(abs(s[i] - s[i + 1]) != 1)
			{
				check = 1;
				cout << "NO" << endl;
				break;
			}
		}
		if(check == 0) cout << "YES" << endl;
	}
	return 0;
}
