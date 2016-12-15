#include <iostream>

using namespace std;

int main () {

	int a1, b1, a2, b2;

	cin >> a1 >> b1 >> a2 >> b2;	

	if (a1 == a2 && b1 == b2){ //iguals
		cout << '=' << endl; 
	} 
	else if (a1 >= a2 && b1 <= b2) { // 1 dins del 2 
		cout << '1' << endl;; 
	}
	else if (a1 <= a2 && b1 >= b2) { // 2 dins del 1
		cout << '2' << endl; 
	}
	else { // separats
		cout << '?' << endl;
	}
}