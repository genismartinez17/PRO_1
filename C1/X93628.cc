#include <iostream>
using namespace std;


void fila (int n, int m){

	if (m == 0){
		for (int i=0; i < n; ++i){
			if (i%2==0)	cout << '.';
			else cout << 'x';
		}
	}
	else if (m == 1){
		for (int i=0; i < n; ++i){
			if (i%2!=0)	cout << '.';
			else cout << 'x';
		}
	}
}



int main (){
	int a;
	while(cin >> a){
		for (int i = 0; i < a; ++i){
			if (i%2==0){
				fila(a,0);
				cout << endl;
			}
			else {
				fila(a,1);
				cout << endl;
			}
		}
		cout << endl;
	}
}