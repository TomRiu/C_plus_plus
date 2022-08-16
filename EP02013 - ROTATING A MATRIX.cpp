#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
void rotatematrix(int m, int n, int a[105][105])
{
    int row = 0, col = 0;
    int prev, curr;
    while (row < m && col < n)
    {
    	if (row + 1 == m || col + 1 == n) break;
        prev = a[row + 1][col];
 
        for (int i = col; i < n; i++)
        {
            curr = a[row][i];
            a[row][i] = prev;
            prev = curr;
        }
        row++;
 
        for (int i = row; i < m; i++)
        {
            curr = a[i][n-1];
            a[i][n-1] = prev;
            prev = curr;
        }
        n--;
 
        if (row < m)
        {
            for (int i = n-1; i >= col; i--)
            {
                curr = a[m-1][i];
                a[m-1][i] = prev;
                prev = curr;
            }
        }
        m--;
 
        if (col < n)
        {
            for (int i = m-1; i >= row; i--)
            {
                curr = a[i][col];
                a[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
}

int main()
{
	test()
	{
		int n, m;
		cin >> m >> n;
		int a[105][105];
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin >> a[i][j];
			}
		}
		rotatematrix(m, n, a);
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cout << a[i][j] << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}
