#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster()
    ifstream f1;
    f1.open("PTIT.in");
    ofstream f2 ("PTIT.out");
    string s;
    while(!f1.eof())
    {
        getline(f1, s);
        f2 << s;
        f2 << "\n";
    }
    f1.close();
    f2.close();
}
