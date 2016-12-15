#include <iostream>
#include <cmath>
using namespace std;



int main() {    

    int h,m,s;
    cin >> h >> m >> s;
    s = s+1;

    if (s==60) {
        m = m+1;
        s = 0;
    }
    if (m==60) {
        h = h+1;
        m = 0;
    }
    if (h==24){
        h = 0;
    }

    if (h < 10) cout << '0';
    cout << h;
    cout << ':';
    if (m < 10) cout << '0';
    cout << m;
    cout << ':';
    if (s < 10) cout << '0';
    cout << s << endl;
}
