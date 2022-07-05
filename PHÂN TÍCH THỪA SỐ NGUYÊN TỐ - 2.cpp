#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;
int main()
{
	faster()
	ll n;
	cin >> n;
	int kt = 0;
	for(long long i = 2; i <= sqrt(n); i++) 
	{
		if (n % i == 0)
		{
			kt++;
			long long t = 0;
			while(n % i == 0)
			{
				t++;
				n /= i;
			}
			cout << i << " " << t << " ";
			cout << endl;
		}
	}
	if(n > 1)
	{
		cout << n << " " << 1 << " ";
	}
	return 0;
}
