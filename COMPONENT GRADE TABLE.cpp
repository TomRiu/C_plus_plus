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
	string id, name, cls;
    float p1, p2, p3;
};

bool cmp(Student a, Student b)
{
    return a.name < b.name;
}

void input(Student &a)
{
    cin.ignore();
    getline(cin, a.id);
    getline(cin, a.name);
    getline(cin, a.cls);
    cin >> a.p1 >> a.p2 >> a.p3;
}

void printlist(Student a[], int n)
{
	for(int i = 0; i < n; i++)
    {
        int j = i + 1;
        cout << j << " ";
        cout << a[i].id << " " << a[i].name << " " << a[i].cls << " ";
        cout << fixed << setprecision(1) << a[i].p1 << " " << a[i].p2 << " " << a[i].p3 << endl;
    }
}

int main(){
    struct Student lst[50];
    int N, i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    sort(lst, lst + N, cmp);
    printlist(lst,N);
    return 0;
}
