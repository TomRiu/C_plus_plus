#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;

int k = 0;

struct Employee
{
	string id, name, sex, bd, adr, mst, nhd;
};

void fix(Employee &a, int k)
{
    a.id = to_string(k);
    while(a.id.size() < 5) a.id = "0" + a.id;
}

void input(Employee &a)
{
    k++;
    if(k == 1) cin.ignore();
    getline(cin, a.name);
    getline(cin, a.sex);
    getline(cin, a.bd);
    getline(cin, a.adr);
    getline(cin, a.mst);
    getline(cin, a.nhd);
    fix(a, k);
}

void printlist(Employee a[], int n)
{
	for(int i = 0; i < n; i++)
    {
        cout << a[i].id << " " << a[i].name << " " << a[i].sex << " " << a[i].bd << " ";
        cout << a[i].adr << " " << a[i].mst << " " << a[i].nhd << endl;
    }
}

int main(){
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}
