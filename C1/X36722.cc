#include <iostream>
using namespace std;

int main () {
	cout.setf(ios::fixed);
	cout.precision(4);

  	double v, x, d, e;
  	e = d = 0;
  	string div;

  	cin >> v;

  	while (cin >> x){
  		cin >> div;
  		if (div == "USD") {
  			e += (x/v);
  			d += x;
  		}
  		else if (div == "EUR") {
  			e += x;
  			d += x*v;
  		}

  	}
  	cout << e << ' ' << d << endl;
}