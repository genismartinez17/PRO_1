#include <iostream>
#include <cmath>
using namespace std;

/*double pow (double x, double y) {
	double d = 1;
	if (y<=0) return d;
	else{ 
		double c = x;
    	for (double i=2;i<=y;i++){
    		c=c*x;
   		}
    	return c;
	}
}*/

int main () {
	cout.setf(ios::fixed);
    cout.precision(4);
	double a, b;
	double c = 0;
	double d = 0;
	cin >> a;

	while (cin >> b){
		d += b*pow(a,c);
		++c;
	} 
	cout << d << endl;
}