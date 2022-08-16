#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster();
    test()
    {
        int n, x;
        cin >> n >> x;
        int a[10005];
        for(int i = 0; i < n; i++) cin >> a[i];
        long long sum = a[n - 1];
        long long mu = 1;
        long long p;
        for(int i = n - 2; i >= 0; i--)
        {
            mu = ((mu % mod) * (x % mod)) % mod;
            p = (a[i] * mu) % mod;
            sum = (sum + p) % mod;
        }
        cout << sum << endl;
    }
	return 0;
}
