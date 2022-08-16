#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

ll gcd(ll a, ll b)
{
    if(!b) return a;
    return gcd(b, a % b);
}

struct PhanSo
{
    ll tu, mau;
};

void nhap(PhanSo &p)
{
    faster();
    cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p)
{
    ll UCLN = gcd(p.tu, p.mau);
    p.tu /= UCLN;
    p.mau /= UCLN;
}

PhanSo tong(PhanSo &p, PhanSo &q)
{
    ll BCNN = p.mau * q.mau / gcd(p.mau, q.mau);
    PhanSo ans;
    ans.mau = BCNN;
    ans.tu = (BCNN / p.mau) * p.tu + (BCNN / q.mau) * q.tu;
    rutgon(ans);
    return ans;
}

void in(PhanSo &p)
{
    cout << p.tu << '/' << p.mau;
}

int main() {
    struct PhanSo p,q;
    nhap(p); nhap(q);
    PhanSo t = tong(p,q);
    in(t);
    return 0;
}
