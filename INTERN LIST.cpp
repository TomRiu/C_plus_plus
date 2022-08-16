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
    int index;
	string id, name, cls, email, corp;
};

int k = 0;

bool cmp(Student a, Student b)
{
    return a.id < b.id;
}

void input(Student &a)
{
    k++;
    a.index = k;
    getline(cin, a.id);
    getline(cin, a.name);
    getline(cin, a.cls);
    getline(cin, a.email);
    getline(cin, a.corp);
}

void printlist(Student a[], int n)
{
	for(int i = 0; i < n; i++)
    {
        cout << a[i].index << " " << a[i].id << " ";
        cout << a[i].name << " " << a[i].cls << " ";
        cout << a[i].email << " " << a[i].corp << endl;
    }
    cout << endl;
}

int main(){
    struct Student lst[1005];
    int N, i;
    cin >> N;
    cin.ignore();
    for(i = 0; i < N; i++) input(lst[i]);
    int t;
    cin >> t;
    cin.ignore();
    Student res[1005];
    int idx = 0;
    while(t--)
    {
        string s;
        cin >> s;
        for(int i = 0; i < N; i++)
        {
            if(s == lst[i].corp) res[idx++] = lst[i];
        }
    }
    sort(res, res + idx, cmp);
    printlist(res, idx);
    return 0;
}

