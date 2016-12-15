#include <iostream>
using namespace std;

 bool c_frac(int n1, int d1, int n2, int d2){
     int p1 = n1 * d2;
     int p2 = n2 * d1;
     if (p1 < p2) return true;
     return false;
 }


int main() {
    int a, b , c, d;
    while(cin >> a >> b >> c >> d){
        if (c_frac(a,b,c,d)) cout << "si" << endl;
        else cout << "no" << endl;
    }
}