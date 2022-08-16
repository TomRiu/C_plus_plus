#include <iostream>
#include <cmath>
#include <string>
#include <ctype.h>
#include <iomanip>
#define test() int t; cin >> t; while(t--)
using namespace std;
long long UCLN(long long a, long long b)
{
	while(b != 0)
	{
		long long tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

long long BCNN(long long a, long long b)
{
	return a * b / UCLN(a, b);
}

long long BCNN_3so(long long a, long long b, long long c)
{
	long long tmp = BCNN(a, b);
	return BCNN(tmp, c);
}

int check(long long a, long long b)
{
	int cnt = 0;
	while(a > 0)
	{
		cnt++;
		a /= 10;
	}
	if(cnt > b) return 0;
	else if(cnt <= b) return 1;
}

int main()
{
	test()
	{
		long long x, y, z, n;
		cin >> x >> y >> z >> n;
        long long big;
        if(x >= y && x >= z) big = x;
        else if(y >= x && y >= z) big = y;
        else if(z >= x && z >= y) big = z;
		long long bc = BCNN_3so(x, y, z);
		int c = check(bc, n);
		if(c == 0 || check(big, n) == 0) cout << "-1" << endl;
		else if(c == 1)
		{
			long long i = 1;
			for(long long j = 1; j <= n - 1; j++) i *= 10;
			if(i == bc || i % bc == 0) cout << i << endl;
			else if(i % bc != 0)
			{
				long long res = (1 + i / bc) * bc;			
				cout << res << endl;
			}
		}	
	} 
	return 0;
}
