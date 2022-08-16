#include <bits/stdc++.h>
using namespace std;

struct Fraction
{
	long long ts, ms;
};

void input(Fraction &p)
{
	cin >> p.ts >> p.ms;
}

void simplify(Fraction &p)
{
	long long g = __gcd(p.ts, p.ms);
	p.ts /= g;
	p.ms /= g;
}

void print(Fraction &p)
{
	cout << p.ts << '/' << p.ms;
}
int main() {
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}
