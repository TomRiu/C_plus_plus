#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int gcd(int a, int b)
{
	while(b != 0)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	
	return a;
}

int isCoprimal(int a, int b)
{
	if(gcd(a, b) == 1) return 1;
	return 0;
}

int main()
{
	test()
	{
		long long n, m;
		cin >> n >> m;
		long long sum;
		sum = ((n + 1) * n) / 2;
		if((sum - m) % 2 != 0)
		{
			cout << "No" << endl;
			continue;
		}
		else
		{
			long long a = (sum - m) / 2;
			long long b = a + m;
			if(isCoprimal(a, b) == 1) cout << "Yes";
			else cout << "No";
			cout << endl;
		}
	}
	return 0;
}

