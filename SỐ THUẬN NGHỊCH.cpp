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
		string s, rs = "";
		cin >> s;
		for(int i = 0; i < s.size(); i++)
		{
			rs = s[i] + rs;
		}
		if(rs == s) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
