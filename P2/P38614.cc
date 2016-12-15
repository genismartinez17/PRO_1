#include <iostream>
using namespace std;


int main () {

	int n,i,a;
	cin>>n;
	a = 0;
	i = n;
	if (i < 10){
		if (i%2==0) cout << n << " ES TXATXI" << endl;
		else cout << n << " NO ES TXATXI" << endl;
	}
	else{ 
		while (i>=10){

		a = a + (i%10);
		i = i/100;
		
		}
		a = a+i;
		if (a%2==0) cout << n << " ES TXATXI" << endl;
		else cout << n << " NO ES TXATXI" << endl;	
	}

}

