#include <iostream>
#include <cmath>

using namespace std;

int main () {

	int a;

	cin >> a;

	if (a%4 != 0) {

		cout << "NO" << endl;
		
	}

	else if (a%4 == 0 and (a%100) == 0 and (a/100)%4 != 0) {

		cout << "NO" << endl;
		
	}

	else {

		cout << "YES" << endl;
		
	}

}