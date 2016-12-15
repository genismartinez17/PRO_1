#include <iostream>
using namespace std;

int max (int a, int b, int c){
	if (a>b and a>c) return a;
	else if (b>a and b>c) return b;
	else if (c>a and c>b) return c;
	else return a;
}

int mid (int a, int b, int c){
	if ((a>b and a<c) or (a>c and a<b)) return a;
	else if ((b>a and b<c) or (b>c and b<a)) return b;
	else if ((c>a and c<b ) or (c>b and c<a)) return c;
	else return a;
}


int min (int a, int b, int c){
	if (a<b and a<c) return a;
	else if (b<a and b<c) return b;
	else if (c<a and c<b) return c;
	else return a;
}

int main (){
	
	int x, y, z;
	char a;
	cin >> x >> y >> z;

	//cout << min(x,y,z)<<' '<<mid(x,y,z)<<' '<<max(x,y,z);

	for(int i = 0; i < 3; ++i){
		cin >> a;
		if (a == max(int('A'),int('B'),int('C'))) cout << max(x,y,z);
		else if (a == mid(int('A'),int('B'),int('C'))) cout << mid(x,y,z);
		else if (a == min(int('A'),int('B'),int('C'))) cout << min(x,y,z);
		if (i==2) cout << endl; 
		else cout << ' ';
	}
	
}	