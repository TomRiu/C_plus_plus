#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
	faster()
	test()
	{
		int a, m, c = 0;
		cin >> a >> m;
		for(int i = 1; i < m; i++)
		{
			if((a * i) % m == 1)
			{
				c = 1;
				cout << i << endl;
				break;
			}
		}
		if(c == 0) cout << "-1" << endl;
	}
	return 0;
}