#include <iostream>
using namespace std;

char complement(char c){
    if (c == 'A') return 'T';
    else if (c == 'T') return 'A';
    else if (c == 'C') return 'G';
    else if (c == 'G') return 'C';
    else return c;
}


int main() {
    char a;
    string v;
    bool seq = false;
    while(cin >> a and a != ' '){
        int i = 0;
        v[i] = a;
        if (a == 'G' and i >= 2 and v[i-1] == 'A' and v[i-2] == 'T') seq = true;
        if (seq) cout << complement(a);
    }
    cout << endl;
}