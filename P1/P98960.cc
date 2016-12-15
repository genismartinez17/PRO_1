#include <iostream>
#include <stdio.h>
#include <cctype>

using namespace std; 

int main () {

	char a,c,d;
	int b;

	cin >> a;
	
	b = int(a);
	c = toupper(a);
	d = tolower(a);
	
	if ( b >= 65 and b <= 90) {
		cout << d << endl;

	}
	else if (b >= 97 and b <= 122) {
		cout << c << endl;
	}
	
}