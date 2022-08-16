#include<bits/stdc++.h>
#define c(n) cout << n << endl ;
#define ci(n) cin >> n;
#define c_pre(n) cout << fixed << setprecision(3) << n ;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
typedef unsigned long long ull;
typedef double db;
typedef long long ll;
typedef long double ld;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;



int main() {
    faster();
    freopen("DATA.in", "r", stdin);
    int n, m, x;
    cin >> n >> m;
    map<int, int> a1, a2;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a1[x]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        a2[x]++;
    }
    for (auto i : a1)
    {
        for(auto it : a2){
            if(it.first == i.first){
                cout << it.first << " ";
            }
        }
    }
    return 0 ;
}

