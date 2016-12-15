#include <iostream>
#include <cmath>
using namespace std;

int main () {

	cout.setf(ios::fixed);
    cout.precision(4);
	
	double c, i, t, r, x;
	string a;
	
	cin >> c >> i >> t >> a;

	if (a == "simple") {
		r = c+((t*i*c)/100);
	}
	else if (a == "compost") {
		x = 1+(i/100);
		r = c * pow(x,t);
	}

	cout << r << endl;

}