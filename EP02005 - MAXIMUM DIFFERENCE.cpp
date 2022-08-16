#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster()
    test()
    {
    	int n;
        cin >> n;
        int a[100005];
        for(int i = 0; i < n; i++) cin >> a[i];
        int res = -1;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(a[i] < a[j])
                {
                    int tmp = a[j] - a[i];
                    if(tmp > res) res = tmp;
                }
            }
        }
        cout << res << endl;
	}
	return 0;
}
