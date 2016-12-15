#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int p,a,b,c;
	char r;
	
	cin >> p;
	a = 0;
	b = 0;
	c = 0;

	for (int i = 0; i < p; i++){
		cin >>r;
		if (r == 'a') a++; 
		else if (r == 'b') b++; 
		else if (r == 'c') c++;	
	}
	if ((b>a and b>c)or (a<b and a<c and b==c))cout << "majoria de b" << endl << b <<" repeticio(ns)" << endl;
	else if (c>a and c > b) cout << "majoria de c" << endl << c <<" repeticio(ns)" << endl;
	else cout << "majoria de a" << endl << a <<" repeticio(ns)" << endl;
}