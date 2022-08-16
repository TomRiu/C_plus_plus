#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;

void fibonacci(ll a[], int n)
{
	ll a1 = 1, a2 = 1;
    ll i = 3;
    while (i <= n)
    {
        a[i] = a1 + a2;
        a1 = a2;
        a2 = a[i];
        i++;
    }
}

int main()
{
	ll a[95] = {};
	a[0] = 0;
	a[1] = 1;
	a[2] = 1;
	fibonacci(a, 92);
	faster()
	test()
	{
		ll n;
		cin >> n;
		cout << a[n];
		cout << endl;
	}
	return 0;
}

