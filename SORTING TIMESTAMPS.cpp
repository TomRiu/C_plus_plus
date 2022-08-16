#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;

struct Time
{
	int h, m, s;
};

bool cmp(Time a, Time b)
{
    if(a.h == b.h)
    {
        if(a.m == b.m) return a.s < b.s;
        return a.m < b.m;
    }
    return a.h < b.h;
}

void input(Time &a)
{
    cin >> a.h >> a.m >> a.s;
}

void printlist(Time a[], int n)
{
	for(int i = 0; i < n; i++)
    {
        cout << a[i].h << " " << a[i].m << " " << a[i].s << endl;
    }
}

int main(){
    struct Time lst[50];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i = 0; i < N; i++) input(lst[i]);
    sort(lst, lst + N, cmp);
    printlist(lst,N);
    return 0;
}
