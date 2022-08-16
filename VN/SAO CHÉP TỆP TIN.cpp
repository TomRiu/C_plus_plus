#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fio() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
int main()
{
    faster();
    fstream in, out;
    in.open("PTIT.in", ios::in);
    out.open("PTIT.out", ios::out);
    string s;
    while(getline(in, s)) out << s << endl;
    return 0;
    in.close();
    out.close();
    return 0;
}