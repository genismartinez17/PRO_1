#include <iostream>

using namespace std;

int main () {
    
    int x, y, p, q, r;
    cin >> x >> y;
    
    p = max(x,y);
    q = min(x,y);
        
    for (r=p;r>=q;r=r-1){
        cout << r << endl;
        
    }
    


}

