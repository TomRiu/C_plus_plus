#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define F(i, a, b) for(int i = a; i < b; ++i)
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
bool thuanNghich(string &s)
{
    int len = s.length() / 2;
    F(i, 0, len) if(s[i] != s[s.length() - i - 1]) return 0;
    return 1;
}

bool toanChan(string &s)
{
    F(i, 0, s.length()) if(s[i] & 1) return 0;
    return 1;
}

int main()
{
    faster();
    int t;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        if(thuanNghich(s) && toanChan(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

