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
		reverse(s.begin(), s.end());
		int res = 0;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == '1')
			{
				if(i == 0) res += 1; 
				else
				{
					int tmp = 1;
					for(int j = 1; j <= i; j++)
					{
						tmp *= 2;
						tmp %= 5;
					}
					res += tmp;
				}
				res %= 5;
			}
		}
		if(res == 0) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
	return 0;
}
