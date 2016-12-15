#include <iostream>
using namespace std;


bool es_fantastic(int x){
    int y = 0;
    if (x == 0) return false;
    for (int i = x; i > 0; i = i/10){
        y++
        if ((y%2 != 0 and aux%2 == 0) or ((i%10)%2 == 0 and aux%2 != 0)) return false;        
    } 
    return true;
}


int main() {
    
	int n, i, triplet, nombres;
	i = triplet = nombres = 0;

	while (cin >> n) {
		if (es_fantastic(n)) ++i;
		else if (not es_fantastic(n)) i = 0;
		if (i >= 3) {
			++triplet;
		}
		++nombres;
	}

	cout << "nombres: " << nombres << endl;
	cout << "triplets fantastics: " << triplet << endl;
}