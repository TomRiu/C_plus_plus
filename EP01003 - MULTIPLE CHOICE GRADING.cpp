#include <iostream>
#include <string.h>
#define test() int t; scanf("%d", &t); while(t--)

int main()
{
	test()
	{
		int c;
		scanf("%d", &c);
		char a[50];
		fgets(a, sizeof a, stdin);
		const char delim[] = " ";
		char *p = strtok(a, delim);
		int idx = 0;
		double s = 0;
		int k101[15] = {65, 66, 66, 65, 68, 67, 67, 65, 66, 68, 67, 67, 65, 66, 68};
		int k102[15] = {65, 67, 67, 65, 66, 67, 68, 68, 66, 66, 67, 68, 68, 66, 66};
		while(p != NULL)
		{
			if(c == 101 && k101[idx++] == *p) s++; 
			else if(c == 102 && k102[idx++] == *p) s++;
			p = strtok(NULL, delim);
		}
		printf("%.2f\n", s * 2/3);
	}
	return 0;
}

