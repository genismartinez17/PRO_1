#include <iostream>

using namespace std;

int main () {
    
    int x, y, r;
    cin >> x;
    
   	for (r=x;r>=2;r=r/2){
    	y = r%2;
    	cout << y ;
    }
    if (x!=0) cout << '1' << endl;
    else cout << '0' << endl;

}

