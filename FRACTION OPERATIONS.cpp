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

struct Fraction
{
    long long ts, ms;
    void in()
	{
		cout << ts << '/' << ms;
	}
    Fraction cong(Fraction o)
	{
		Fraction tmp = *this;
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
    Fraction nhan(Fraction o)
	{
		Fraction tmp = *this;
		tmp.ts *= o.ts;
		tmp.ms *= o.ms;
        int k = __gcd(tmp.ts, tmp.ms);
		tmp.ts /= k;
		tmp.ms /= k;
		return tmp;
	}
};

void read_input(Fraction &a)
{
    cin >> a.ts >> a.ms;
}

void process(Fraction &a, Fraction &b)
{
    Fraction c = a.cong(b);
    Fraction C = c.nhan(c);
    Fraction d = a.nhan(b);
    Fraction D = d.nhan(C);
    C.in();
    cout << " ";
    D.in();
    cout << endl;
}

int T;

int main() {
	int t;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}
