#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll x;
        vector<ll> v;
        for(int i = 0; i < n; ++i)
        {
            cin >> x;
            if(x) v.push_back(x);
        }
        for(int i = 0; i < v.size(); ++i) cout << v[i] << ' ';
        int cnt = n - v.size();
        while(cnt--) cout << 0 << ' ';
        cout << endl;
    }
    return 0;
}