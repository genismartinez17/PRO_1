#include <iostream>
using namespace std;
 
 
int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
 
    int n;
    cin >> n;
    double x;
    double s1, s2;
    s1 = s2 = 0;
    for (int i = 0; i < n; i++) {
            cin >> x;
            s1 = s1 + x*x;
            s2 = s2 + x;
    }
    double res = s1/(n-1) - (s2*s2)/(n*n - n);
    cout << res << endl;
}