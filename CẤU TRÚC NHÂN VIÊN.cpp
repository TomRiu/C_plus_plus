#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

struct NhanVien 
{
    string id = "00001";
    string name, sex, bd, add, mst,nhd;
};

void nhap(NhanVien &a)
{
    getline(cin, a.name);
    cin >> a.sex;
    cin.ignore();
    getline(cin, a.bd);
    getline(cin, a.add);
    cin >> a.mst;
    cin.ignore();
    getline(cin, a.nhd);
}

void in(NhanVien &a)
{
    cout << a.id << " " << a.name << " " << a.sex << " " << a.bd << " ";
    cout << a.add << " " << a.mst << " " << a.nhd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

