#include <iostream>
using namespace std;


int main () {
	cout.setf(ios::fixed); 
	cout.precision(4);
	
	double n, a, s;
	cin >> n;
	s = 0;
	
	for (a = 1;a<=n;a=a+1) {
		s = s+1/a;		
		
	}
	
	cout << s << endl;
}
