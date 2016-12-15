#include <iostream>
using namespace std;



int volta (int n){
	int m = 0;
	for (int i = n; i > 0; i = i/10) m = m * 10 + i % 10;
	return m;
}

void write_digit(int d,int x) {
    for (int i = 0; i < x; ++i) cout << d;
}

void write_expanded(int n) {
	int m = volta(n);
	for (int i = m; i > 0; i = i/10){
		int j = i%10;
		int q = j+1;
		write_digit(j,q);
	}
}

int main() {
    int n;
    while (cin >> n) {
        write_expanded(n);
        cout << endl;
    }
}