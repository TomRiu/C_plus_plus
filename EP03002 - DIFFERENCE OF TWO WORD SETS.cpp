#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
    test()
    {
        scanf("\n");
        string str1;
        getline(cin, str1);
        string str2;
        getline(cin, str2);
        string a1[10000] = {};
        string a2[10000] = {};
        stringstream ss1(str1);
        string tmp;
        int idx1 = 0;
        while(ss1 >> tmp) a1[idx1++] = tmp;
        stringstream ss2(str2);
        string tmp2;
        int idx2 = 0;
        while(ss2 >> tmp2) a2[idx2++] = tmp2;
        string f[10000] = {};
        int idx = 0;
        for(int i = 0; i < idx1; i++)
        {
            int check = 1;
            for(int j = 0; j < idx2; j++)
            {
                if(a1[i] == a2[j])
                {
                    check = 0;
                    break;
                }
            }
            if(check == 1) f[idx++] = a1[i];
        }
        for(int i = 0; i < idx; i++)
        {
            int check = 1;
            for(int j = 0; j < i; j++)
            {
                if(f[i] == f[j])
                {
                    check = 0;
                    break;
                }
            }
            if(check == 0) f[i].clear();  
        }
        for(int i = 0; i < idx - 1; i++)
        {
            for(int j = 0; j < idx - i - 1; j++)
            {
                if(f[j] > f[j + 1])
                {
                    string st = f[j];
                    f[j] = f[j + 1];
                    f[j + 1] = st;
                }
            }
        }
        for(int i = 0; i < idx; i++)
        {
            if(!f[i].empty()) cout << f[i] << ' ';
        }
        cout << endl;
    }
	return 0;
}

