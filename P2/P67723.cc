#include <iostream>

using namespace std;

int main (){

	int a,b,max,min,i;

	cin >> a >> b;

	if (a<b){
		max = b;
		min = a;
	}
	else {
		max = a;
		min = b;
	}
	i = max%min;
	while (i != 0){
		max = min;
		min = i;
		i = max%min;
	}
	cout << "El mcd de "<< a <<" i "<<b<<" es "<< min << '.' << endl;
}