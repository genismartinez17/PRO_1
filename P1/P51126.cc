#include <iostream>

using namespace std;

int main () {

	int a1, b1, a2, b2;

	cin >> a1 >> b1 >> a2 >> b2;	

	cout << "[";
	
	if (a1 >= a2 && a1 <= b2) cout << a1 << ',';
	else if (a2 >= a1 && a2 <= b1)cout << a2 << ',';

	if (b1 >= a2 && b1 <= b2) cout << b1;
	else if (b2 >= a1 && b2 <= b1)cout << b2;

	cout << "]" << endl;
}