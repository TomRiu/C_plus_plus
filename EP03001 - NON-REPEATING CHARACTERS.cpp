#include <iostream>
#include <cmath>
#include <string>
#define test() int t; cin >> t; while(t--)
using namespace std;
int main()
{
    test()
    {
    	string str;
    	cin >> str;
    	for(int i = 0; i < str.size(); i++)
    	{
    		int check = 1;
    		for(int j = 0; j < str.size(); j++)
    		{
    			if(j == i) j++;
    			if(str[i] == str[j]) 
    			{
    				check = 0;
    				break;
				}
			}
			if(check == 1) cout << str[i];
		}
		cout << endl;
	}
	return 0;
}

