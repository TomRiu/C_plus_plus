#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster()
    test()
    {
        int n, max = 0;
        cin >> n;
        int a[n][n], srow[n] = {}, scol[n] = {};
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++) 
            {
                cin >> a[i][j];
                srow[i] += a[i][j];
            }
            if(srow[i] > max) max = srow[i];
        }
        for(int j = 0; j < n; j++)
        {
            for(int i = 0; i < n; i++)
            {
                scol[j] += a[i][j];
            }
            if(scol[j] > max) max = scol[j];
        }
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            res += (max - srow[i]);
        }
        cout << res << endl;
    }
    return 0;
}
