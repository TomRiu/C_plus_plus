#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
bool check(string &s)
{
    int tmp = 0, len = s.length() - 1;
    for(int i = 0; i <= len; i++)
    {
        tmp *= 10;
        tmp += s[i] - '0';
        tmp %= 11;
    }
    return tmp == 0;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
    return 0;
}