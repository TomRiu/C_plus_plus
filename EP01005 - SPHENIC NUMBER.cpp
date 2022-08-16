#include <iostream>
#include <cmath>
#include <string>
#include <ctype.h>
#define test() int t; cin >> t; while(t--)
using namespace std;
int sphenic(int n)
{
	double sqr = sqrt(n);
	int cnt, check = 0;
	for(int i = 2; i <= sqr; i++)
	{
		cnt = 0;
		while(n % i == 0)
		{
			cnt++;
			n /= i;
		}
		if(cnt > 1) return 0;
		if(cnt == 1) check++;
	}
	if(n != 1) check++;
	if(check == 3) return 1;
	return 0;
}

int main()
{
	test()
	{
		int n;
		cin >> n;
		if(n == 1 || sphenic(n) == 0) cout << "0\n";
		else cout << "1\n";
	}
	return 0;
}

