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

class PhanSo
{
    private:
        ll tu, mau;
    public:
    PhanSo (ll, ll)
    {
        this -> tu;
        this -> mau;
    }
    friend istream &operator >> (istream &is, PhanSo &a)
    {
        cin >> a.tu >> a.mau;
        return is;
    }
    void rutgon()
    {
        ll GCD = gcd(tu, mau);
        tu /= GCD;
        mau /= GCD;
    }
    friend ostream &operator << (ostream &os, PhanSo &a)
    {
        os << a.tu << '/' << a.mau;
        return os;
    }
};

int main(){
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}