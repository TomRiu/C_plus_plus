#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

class NhanVien
{
    private:
        string mnv, name, sex, bd, add, mst, date;
    public:
    friend istream &operator >> (istream &is, NhanVien &a)
    {
        a.mnv = "00001";
        getline(is, a.name);
        getline(is, a.sex);
        getline(is, a.bd);
        getline(is, a.add);
        getline(is, a.mst);
        getline(is, a.date);
        return is;
    }
    friend ostream &operator << (ostream &os, NhanVien &a)
    {
        os << a.mnv << ' ' << a.name << ' ' << a.sex << ' ' << a.bd << ' ' << a.add << ' ' << a.mst << ' ' << a.date;
        return os;
    }
    void nhap()
    {
    	cin >> *this;
	}
	void xuat()
	{
		cout << *this;
	}
};

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}