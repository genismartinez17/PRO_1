#include <iostream>
using namespace std;

int main (){
	int a, x = 0;
	cin >> a;
	int b = a;
	for (int i = 0; i < 3; ++i){
		x += b%10;
		b = b/10;
	}
	cout << x << endl;
}
