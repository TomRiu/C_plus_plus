#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster()
    int n, m;
    cin >> n >> m;
    int a[1005], b[1005];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    int k;
    cin >> k;
    for(int i = 0; i < k; i++) cout << a[i] << ' ';
    for(int i = 0; i < m; i++) cout << b[i] << ' ';
    for(int i = k; i < n; i++) cout << a[i] << ' ';
	return 0;
} 
