#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
#define PI 3.141592653589793238

struct point{
	double x=0,y=0;
};

void input(struct point &A, struct point &B, struct point &C){
	cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y;
}

int checktg(struct point &A,struct point &B,struct point &C){
	if( (A.x==B.x && A.y==B.y) || (A.x==C.x && A.y==C.y) || (B.x==C.x && B.y==C.y) )
		return 0;
	if( (A.x==B.x && A.x==C.x) || (A.y==B.y && A.y==C.y) )
		return 0;
	if( (long double)(A.x-B.x)/(A.x-C.x) == (long double)(A.y-B.y)/(A.y-C.y) )
		return 0;
	return 1;
}

void process(struct point &A,struct point &B,struct point &C){
	ld ab=sqrt((double)(A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
	ld ac=sqrt((double)(A.x-C.x)*(A.x-C.x)+(A.y-C.y)*(A.y-C.y));
	ld bc=sqrt((double)(C.x-B.x)*(C.x-B.x)+(C.y-B.y)*(C.y-B.y));
	ld s=sqrt((double)(ab+ac+bc)*(ab+ac-bc)*(ab+bc-ac)*(ac+bc-ab))/4;
	ld R=ab*bc*ac/(4*s);
	ld S= PI * R *R;
	cout<< setprecision(3) << fixed<<S<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		struct point A;
		struct point B;
		struct point C;
		input(A,B,C);
		if(checktg(A,B,C)==0) cout<<"INVALID"<<endl;
		else{
			process(A,B,C);
		}
	}
}
