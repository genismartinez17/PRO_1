#include <iostream>
using namespace std;


int main () {
	int l, n, m;
	cin >> l >> n >> m;
	
	for (int q = 0; q < l; ++q){
		if (q != 0) cout << endl;
		int x = 10;
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < m; ++j){
				if (x == 0) {
					cout << 9;
					x = 9;
				}
				else cout << --x;
			}
			cout << endl;
		}

	}	
	
}