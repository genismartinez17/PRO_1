#include <iostream>
using namespace std;


int digits (int x){ 
	int j=0;
	for (int i=x; i/10!=0; i=i/10) ++j;
	return j+1;
}

bool laura (int x, int y) {
	if (y%1000 == x%1000) return 1;
	else return 0;
}

int main (){
	int a, b, c;
	cin >> a;
	cout << "nombres que acaben igual que "<< a << ':' << endl;
	while (cin >> b){
		if (laura(a,b)){
			cout << b << endl;
			++c;

		}
	}
	cout << "total: " << c << endl;
	
}