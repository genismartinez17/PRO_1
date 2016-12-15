#include <iostream>
using namespace std;

int main () {

	int a,b, d, r; 
	cin >> a >> b; 
	if (a >= 0) cout << a/b << ' ' << a%b << endl;
	else if (a%b == 0) cout << a/b << ' ' << a%b << endl;
	else {
		d = (a/b) - 1;
		r = d * b - a;
		cout << d << ' ' << (-1) * r << endl;
	}
		

}