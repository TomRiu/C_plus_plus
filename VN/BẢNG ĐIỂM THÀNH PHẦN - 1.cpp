#include <bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define endl '\n'
using namespace std; 

struct SinhVien
{
    string msv, ten, lop;
    double d1, d2, d3;
};

void nhap(SinhVien &a)
{
	cin.ignore();
    getline(cin, a.msv);
    getline(cin, a.ten);
    getline(cin, a.lop);
    cin >> a.d1 >> a.d2 >> a.d3;
}

bool cmp(SinhVien a, SinhVien b)
{
    return a.msv < b.msv;
}

void sap_xep(SinhVien ds[], int t)
{
	sort(ds, ds + t, cmp);
}

void in_ds(SinhVien a[], int t)
{
	F(i, 0, t) cout << i + 1 << ' ' << a[i].msv << ' ' << a[i].ten << ' ' << a[i].lop << setprecision(1) << fixed << ' ' << a[i].d1 << ' ' << a[i].d2 << ' ' << a[i].d3 << endl;
}


int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}