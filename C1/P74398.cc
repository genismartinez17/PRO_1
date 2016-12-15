#include <iostream>
using namespace std;





int main () {
	int a;
	cin >> a;
	for (int i = 2; i <=16; ++i){
		int q = 1;
		for (int j=a; j>=i; j = j/i) ++q;
		cout << "Base " << i << ": " << q << " cifras." << endl;
	}

}