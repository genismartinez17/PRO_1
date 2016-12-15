#include <iostream>
using namespace std;

int main () {
	int a, b, c ;
	cin >> a;
	c = 0; 
	
	while(cin>>b){
		if (b==0){
			c++;
			cout << b << endl;
		}
		else if (b!=1){ 
			if (a>b){
				if (a%b==0){
					c++;
					cout << b << endl;
				}
			}
			else if (a<b) {
				if (b%a==0) {
					c++;
					cout << b << endl;
				}
			}
			else if (a==b) {
				c++;
				cout << b << endl;
			}
		}
		else if (b!=-1){
			if (a>b){
				if (a%b==0){
					c++;
					cout << b << endl;
				}
			}
			else if (a<b) {
				if (b%a==0) {
					c++;
					cout << b << endl;
				}
			}
			else if (a==b) {
				c++;
				cout << b << endl;
			}
		}
	}
}
