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

struct Item
{
	string id, name, ig;
    float buy, sell, profit;
};

void fix(Item &a, int k)
{
    a.id = to_string(k);
    a.profit = a.sell - a.buy;
}

bool cmp(Item a, Item b)
{
    return a.profit > b.profit;
}

void input(Item &a)
{
    k++;
    cin.ignore();
    getline(cin, a.name);
    getline(cin, a.ig);
    cin >> a.buy >> a.sell;
    fix(a, k);
}

void printlist(Item a[], int n)
{
	for(int i = 0; i < n; i++)
    {
        cout << a[i].id << " " << a[i].name << " " << a[i].ig << " ";
        cout << fixed << setprecision(2) << a[i].profit << endl;
    }
}

int main(){
    struct Item lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    sort(lst, lst + N, cmp);
    printlist(lst,N);
    return 0;
}
