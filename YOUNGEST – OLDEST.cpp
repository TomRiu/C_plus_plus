#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
struct people
{
	string name;
	string d, m, y;

	bool operator < (people k)
	{
		if(y != k.y) return y < k.y;
		if(m != k.m) return m < k.m;
		return d < k.d;
	}
};

int main()
{
	faster()
    int n;
	cin >> n;
	people a[105];
	for(int i = 0; i < n; i++) 
	{
		cin >> a[i].name;
		getline(cin, a[i].d, '/');
        getline(cin, a[i].m, '/');
        getline(cin, a[i].y);
	}
	sort(a, a + n);
	cout << a[n - 1].name << endl;
	cout << a[0].name;
	return 0;
}  
