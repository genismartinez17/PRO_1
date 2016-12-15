#include <iostream>
#include <cmath>
using namespace std;

int main () {
	cout.setf(ios::fixed);
    cout.precision(6);
	int n;//rep	
	double x,y,r;
	double p = M_PI;//pi
	string f;//pol	
	cin >> n;	
	for (int i = 0; i < n; ++i){
		cin >> f;
		if (f == "rectangle"){
			cin >> x >> y;
			cout<< x*y << endl;
		}
		if (f == "cercle"){
	 		cin >> r;
			cout<< p*r*r <<endl;
		}
		
	}
	
}
