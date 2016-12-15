#include <iostream>
using namespace std;

int main(){

	int a, d, h, m, s;

    cin >> a >> d >> h >> m >> s;

    s = (a*365*24*3600)+(d*24*3600)+(h*3600)+(m*60)+(s);

    cout << s << endl;

}