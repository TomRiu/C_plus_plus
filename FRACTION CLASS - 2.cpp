#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;
long long lcm(long long a, long long b)
{
	long long n = a * b;
	long long m = __gcd(a, b);
	return n / m;
}

class Rectangle
{
private:
	ll ts, ms;
public: 
	void input()
	{
		cin >> ts >> ms;
	}
	Rectangle cong(Rectangle o)
	{
		Rectangle tmp = *this;
		long long h = lcm(tmp.ms, o.ms);
		long long n = h / tmp.ms;
		long long m = h / o.ms;
		tmp.ts *= n;
		o.ts *= m;
		tmp.ts += o.ts;
		tmp.ms = h;
        long long k = __gcd(tmp.ts, tmp.ms);
		tmp.ts /= k;
		tmp.ms /= k;
		return tmp;
	}
	void output()
	{
		cout << ts << "/" << ms;
	}
};
 
int main()
{
	faster()
	Rectangle a, b;
	a.input();
	b.input();
	(a.cong(b)).output();
	return 0;
}
