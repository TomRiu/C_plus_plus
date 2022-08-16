#include<bits/stdc++.h>
#define c(n) cout << n << endl ;
#define ci(n) cin >> n;
#define c_pre(n) cout << fixed << setprecision(3) << n ;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
typedef unsigned long long ull;
typedef double db;
typedef long long ll;
typedef long double ld;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

struct complex1 {
	int real, img ;

};

void input(complex1 &a ){
	cin >> a.real >> a.img;
}

complex1 tong(complex1 a, complex1 b){
	complex1 c; 
	c.real = a.real+b.real;
	c.img = a.img+b.img;
	return c;
}

complex1 tich(complex1 a, complex1 b){
	complex1 d;
	d.real = ((a.real*b.real) - (a.img*b.img));
	d.img = ((a.real*b.img) + (a.img*b.real));
	return d;
}

void process(complex1 a, complex1 b){
	complex1 tmp, t ;
	tmp = tich(tong(a,b),a);
	t = tong(a,b);
	if(tmp.img < 0){
		tmp.img = -tmp.img;
	cout << tmp.real << " - " << tmp.img<< "i" << ", ";
	}
	else cout << tmp.real << " + " << tmp.img << "i" << ", ";

	complex1 tmp2 = tich(t,t);
	if(tmp2.img < 0){
		tmp2.img = -tmp2.img;
	cout << tmp2.real << " - " << tmp2.img<< "i";
	}
	else {
	cout << tmp2.real << " + " << tmp2.img <<"i" << endl;	 
	}
}

int main(){
    faster();
    int test; ci(test);
	while(test--){
		complex1 a, b;
		input(a);
		input(b);
		process(a,b);

	}
	return 0;
}
