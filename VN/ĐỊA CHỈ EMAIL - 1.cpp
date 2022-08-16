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
    string s[100];
    int idx = 0;
    while(cin >> s[idx]) ++idx;
    for(int i = 0; i < idx; ++i) for(int j = 0; j < s[i].length(); ++j) s[i][j] = tolower(s[i][j]);
    cout << s[idx - 1];
    for(int i = 0; i < idx - 1; ++i) cout << s[i][0];
    cout << "@ptit.edu.vn";
    return 0;
}
