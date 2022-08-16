#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{ 
	faster()
	test()
	{
		string s, res;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> s)
		{
			res = s + " " + res;
		}
		cout << res << endl;
	}
	return 0;
}  