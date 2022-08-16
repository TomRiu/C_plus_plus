#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;
class Rectangle
{
private:
	ll ts, ms;
public: 
	void input()
	{
		cin >> ts >> ms;
	}
	void fix()
	{
		ll g = __gcd(ts, ms);
		ts /= g;
		ms /= g;
	}
	void output()
	{
		cout << ts << "/" << ms;
	}
};
 
int main()
{
	faster()
	Rectangle a;
	a.input();
	a.fix();
	a.output();
	return 0;
}
