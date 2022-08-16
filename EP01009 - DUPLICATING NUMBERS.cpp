#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
long long gcd(long long a, long long b)
{
	long long tmp;
	while(b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main()
{
    faster()
    test()
    {
    	long long a, x, y;
    	cin >> a >> x >> y;
        long long l = gcd(x, y);
        for(int i = 0; i < l; i++) cout << a;
        cout << endl;
	}
	return 0;
}
