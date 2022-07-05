#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{ 
	faster()
	test()
	{
		int n;
		cin >> n;
		if(n & 1)
        {
            cout << 0 << endl;
            continue;
        }
        double sqr = sqrt(n);
        int cnt = 0;
        for(int i = 1; i < sqr; i++)
        {
            if(n % i == 0)
            {
                if(i % 2 == 0) ++cnt;
                if((n / i) % 2 == 0) ++cnt;
            }
        }
        int tmp = (int) sqr;
        if(tmp * tmp == n && tmp % 2 == 0) ++cnt;
        cout << cnt << endl;
	}
	return 0;
}