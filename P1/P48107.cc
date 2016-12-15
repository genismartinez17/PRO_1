#include <iostream>
#include <cmath>

using namespace std;

int main () {

	int a,b,c,d;

	cin >> a >> b;

	c = (a/b);
	d = (a%b);

	if (b != 0) cout << c << ' ' << d << endl;

}