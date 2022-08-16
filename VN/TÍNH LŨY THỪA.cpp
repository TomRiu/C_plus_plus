#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define fio() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

ll MOD;

ll Mul(ll a, ll b)
{
    if(b == 0) return 0;
    ll tmp = Mul(a, b / 2) % MOD;
    if(b & 1) 
        return ((tmp + tmp) % MOD + a % MOD) % MOD;
    else
        return (tmp + tmp) % MOD;
}

ll Pow(ll a, ll b)
{
    if(b == 1) return a;
    ll half =  Pow(a, b / 2) % MOD;
    if(b & 1) 
        return Mul(Mul(half, half), a);
    else    
        return Mul(half, half);
}

int main()
{
    //fio()

    faster()
    test()
    {
        ll a, b;
        cin >> a >> b >> MOD;
        cout << Pow(a, b) << endl;
    }    
    return 0;
}