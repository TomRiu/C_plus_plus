#include <bits/stdc++.h>
using namespace std;

struct PhanSo
{
	long long ts, ms;
};

void nhap(PhanSo &p)
{
	cin >> p.ts >> p.ms;
}

void rutgon(PhanSo &p)
{
	long long g = __gcd(p.ts, p.ms);
	p.ts /= g;
	p.ms /= g;
}

void in(PhanSo &p)
{
	cout << p.ts << '/' << p.ms;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}