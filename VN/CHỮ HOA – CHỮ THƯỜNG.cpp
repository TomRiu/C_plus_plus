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
		char x;
		cin >> x;
		if('A' <= x && x <= 'Z') x -= ('A' - 'a');
		else if('a' <= x &&  x <= 'z') x += ('A' - 'a');
		cout << x << endl;
	}
	return 0;
}
