#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int check(long long n)
{
    if(n % 2 != 0) return false;
    while(n > 0)
    {
        int tmp = n % 10;
        if(tmp % 2 != 0) return false;
        n /= 10;
    }
    return true;
}

int main()
{
    faster()
    test()
    {
    	long long n;
        cin >> n;
        if(check(n)) cout << "YES";
        else cout << "NO";
        cout << endl;       
	}
	return 0;
}
