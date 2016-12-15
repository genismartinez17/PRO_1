#include <iostream>
#include <stdio.h>
using namespace std; 


int main () {

	char a;
	int b;
	cin >> a;
	b = int(a);
	
	if ( b >= 65 and b <= 90) {
		cout << "Lletra majuscula." << endl;
	}
	else if (b >= 97 and b <= 122) {
		cout << "Lletra minuscula." << endl;
	}
	else if (b >= 48 and b <= 57) {
		cout << "Numero" << endl;
	}
	
}