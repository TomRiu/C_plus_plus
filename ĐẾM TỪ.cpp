#include <bits/stdc++.h>
using namespace std;
int main()
{
    //faster();
    int t;
    cin >> t;
    scanf("\n");
    while(t--)
    {
        char s[100005];
        fgets(s, 100000, stdin);
        int cnt = 0;
        s[strlen(s) - 1] = '\0';
        char *p = strtok(s, " \t\n");
        while(p != NULL)
        {
            cnt++;
            p = strtok(NULL, " \t\n");
        }
        cout << cnt << endl;
    }
    return 0;
}