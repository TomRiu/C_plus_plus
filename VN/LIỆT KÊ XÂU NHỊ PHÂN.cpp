#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fio() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
const ll MOD = 1e9 + 7;
using namespace std;

vector<int> v;

void Try(int n, int cnt = 0)
{
    if(cnt == n)
    {
        for(auto i : v) cout << i;
        cout << " ";
        return;
    }
    for(int j = 0; j <= 1; j++)
    {
        v.push_back(j);
        Try(n, cnt + 1);
        v.pop_back();
    }
}

int main()
{
    faster()
    test()
    {
        int n;
        cin >> n;
        Try(n);
        cout << endl;
    }
    return 0;
}