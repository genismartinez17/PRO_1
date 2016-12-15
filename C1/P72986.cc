#include <iostream>
using namespace std;

int main () {
  cout.setf (ios::fixed);
  cout.precision(4);

  double a, b;  
  double c = 0;

  cin >> a;

  while (cin >> b){
    c = (c*a) + b;
  }
  cout << c << endl;
}