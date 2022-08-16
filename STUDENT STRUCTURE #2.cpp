#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;

struct Student 
{
	string msv, name, cls, d, m, y;
    float gpa;		
};

void fix(Student &a, int i)
{
    string n = to_string(i + 1);
    while(n.size() < 3) n = "0" + n;
    a.msv += n;
    string s, x;
    stringstream ss(a.name);
    while(ss >> x)
    {
        x[0] = toupper(x[0]);
        for(int j = 1; j < x.size(); j++) x[j] = tolower(x[j]);
        s += x + " ";
    }
    a.name = s;
    if(a.d[1] == NULL) a.d = "0" + a.d;
    if(a.m[1] == NULL) a.m = "0" + a.m;
    while(a.y.size() < 4) a.y = "0" + a.y;
}

void input(Student a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cin.ignore();
        a[i].msv = "B20DCCN";
        getline(cin, a[i].name);
        cin >> a[i].cls;
        cin.ignore();
        getline(cin, a[i].d, '/');
        getline(cin, a[i].m, '/');
        cin >> a[i].y >> a[i].gpa;
        fix(a[i], i);
    }
}

void print(Student a[], int n)
{
	for(int i = 0; i < n; i++)
    {
        cout << a[i].msv << " " << a[i].name << a[i].cls << " ";
        cout << a[i].d << "/" << a[i].m << "/" << a[i].y << " ";
        cout << fixed << setprecision(2) << a[i].gpa << endl;
    }
}

int main(){
    struct Student lst[50];
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}

