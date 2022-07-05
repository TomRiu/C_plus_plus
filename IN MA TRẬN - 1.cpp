#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    faster();
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n + 5][n + 5];
        FOR(i, 1, n) FOR(j, 1, n) cin >> a[i][j];
        FOR(i, 1, n)
        {
            if(i & 1) FOR(j, 1, n) cout << a[i][j] << ' ';
            else FORD(j, n, 1) cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
