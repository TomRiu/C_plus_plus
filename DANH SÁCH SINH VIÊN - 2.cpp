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
    string msv, name, lop, bd;
    float GPA;
};

int cnt = 0;

void nhap(SinhVien a[], int n)
{
    F(i, 0, n)
    {
        ++cnt;
        if(cnt < 10) a[i].msv = "B20DCCN00" + to_string(cnt);
        else a[i].msv = "B20DCCN0" + to_string(cnt);
        cin.ignore();
        string s;
        getline(cin, s);
        a[i].name = "";
        stringstream ss(s);
        while(ss >> s)
        {
            s[0] = toupper(s[0]);
            F(i, 1, s.length()) s[i] = tolower(s[i]);
            a[i].name += s;
            a[i].name += ' ';
        }
        a[i].name.erase(a[i].name.end() - 1);
        cin >> a[i].lop >> a[i].bd >> a[i].GPA;
        if(a[i].bd[2] != '/') a[i].bd = "0" + a[i].bd;
        if(a[i].bd[5] != '/') a[i].bd.insert(3, "0");
    }
}

void in(SinhVien a[], int n)
{
    F(i, 0, n) cout << a[i].msv << ' ' << a[i].name << ' ' << a[i].lop << ' ' << a[i].bd << ' ' << setprecision(2) << fixed << a[i].GPA << endl;
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}