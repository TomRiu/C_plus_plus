#include <bits/stdc++.h>
const long long mod = 1e9 + 7;
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
    test()
    {
        int n;
        cin >> n;
        int a[105][105];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if(i == 0 || i == n - 1)
                {
                    cout << a[i][j] << ' ';
                }
                else if( 0 < i && i < n - 1)
                {
                    if(j == 0 || j == n - 1)
                    {
                        cout << a[i][j] << ' ';
                    }
                    else cout << "  ";
                }
            }   
            cout << endl;
        }
            
    }
	return 0;
}
