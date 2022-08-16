#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const ll MOD = 1e9 + 7;
using namespace std;
ll pow(ll a, int b)
{
	if(b == 0) return 1;
	ll p = pow(a, b/2);
	if(b % 2 == 0) return (p * p) % MOD;
	return (a * ((p * p) % MOD)) % MOD;
}
main()
{
	faster()
	test()
	{
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int ucln = a[0];
        for(int i = 1; i < n; i++) ucln = __gcd(ucln, a[i]);
        ll h = 1;
        for(int i = 0; i < n; i++) h = (h * a[i]) % MOD;
        cout << pow(h, ucln) << endl;
	}
}
