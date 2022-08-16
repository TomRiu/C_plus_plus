#include <bits/stdc++.h>
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long gcd(long long a, long long b)
{
	while(b != 0)
	{
		long long tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main()
{
    faster()
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
	long long s1 = abs(a - b);
    long long s2 = abs(a - c);
    long long s3 = abs(a - d);
    long long gcd_2 = gcd(s1, s2);
    long long gcd_3 = gcd(gcd_2, s3);
	cout << gcd_3;
	return 0;
}
