#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

 void escriu_hora(int h, int m, int s){
	 cout << h << ':' << m << ':' << s << endl;
 }

void llegeix_hora(int& h, int& m, int& s){
	//int a;
	int c;
	char x;
	string y;
	c = h = m = s = 0;
	// cin >> a;
	// for (int i = 0; i < a; ++i){

		
		cin >> x;
		while (x != '|') cin >> x;
		while (cin >> x and x != '|'){
			if (x == '*') h += pow(2,c);
			++c;
		}
		c = 0;
		while (cin >> x and x != '|'){
			if (x == '*') m += pow(2,c);
			++c;
		}
		c = 0;
		while (cin >> x and x != '|'){
			if (x == '*') s += pow(2,c);
			++c;
		}	
		escriu_hora(h,m,s);
	//}
}

int main() {
    int h, m, s;
	llegeix_hora(h, m, s);
}