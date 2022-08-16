#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;

int main()
{
	faster()
	int a[1005] = {};
	ifstream f ("DATA.in");
	string line;
	while(!f.eof())
	{
		getline(f, line);
		stringstream ss(line);
		string s;
		while(ss >> s)
		{
			int tmp = 0;
			FOR(i, 0, s.size() - 1) tmp = tmp * 10 + s[i] - '0';
			a[tmp]++;
		}
	}
	FOR(i, 0, 1004)
	{
		if(a[i] > 0) cout << i << ' ' << a[i] << endl;
	}
	return 0;
}

