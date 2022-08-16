#include <bits/stdc++.h>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
    test()
    {
        long long n;
        cin >> n;
        long long a[100005];
        long long max = 0;
        for(long long i = 0; i < n; i++) 
        {
            cin >> a[i];
            if(a[i] > max) max = a[i];
        }
        cout << max << endl;
    }
	return 0;
}
