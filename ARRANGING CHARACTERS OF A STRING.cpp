#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fio() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
const ll MOD = 1e9 + 7;
using namespace std;

int main()
{
    //fio()
    faster()
    test()
    {
        int f[1005] = {};
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            f[s[i]]++;
        }
        sort(f, f + 1005);
        reverse(f, f + 1005);
        if(f[0] > (s.size() + 1) / 2) cout << 0;
        else cout << 1;
        cout << endl;
    }
    return 0;
}
