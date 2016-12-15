#include <iostream>
using namespace std;

int volta(int n){
    int v = 0;
    for (int i=n; i!=0; i=i/10) v = v*10 + i%10; 
    return v;
}



int main() {
    int a;
    cin >>a;
    cout << volta(a) << endl;
}