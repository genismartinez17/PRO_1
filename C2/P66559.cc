#include <iostream>
using namespace std;

// bool es_ascendent(int n){
//     int c;
//     for (int j = n; j > 0; j = j/10) ++c;
//     if (c == 1) return true;
//     int m;
//     for (int i = n; i > 0; i = i/10){
//         m = i/10;
//         if ((i%10 == 0 and m%10 != 9) or (m%10 != 9 and i%10 < m%10) ) return false;
//         else --c;      
//     }
//     if (c==0) return true;
//     return false;
// }

bool es_ascendent(int n) {
int a, b;
bool trobat = true;
	while (n > 10 and trobat) {
	a = n%10;
	n = n/10;
	b = n%10;
	if(b == 9 and a == 0) trobat = true;
	else if( (a-1) == b) trobat = true;
	else trobat = false; 
	}
if(trobat) return true;
else return false;
}




int main (){
    // int a, b;
    // bool seq, trobat;
    // seq = trobat = false;
    // b = 0;
    // while (cin >> a){

    //     if (es_ascendent(a)){
    //         if (seq) ++b;
    //         else{
    //             b = 1;
    //             seq = true;
    //         }
    //     }
    //     else{
    //         b = 0;
    //         seq = false;
    //     }
                 
    //     if (b >= 2) trobat = true;
    // }

    // if (trobat) cout << "SI" << endl;
    // else cout << "NO" << endl;



    bool s2 = false;
        int x, fi = 0;
        while (not s2 && cin >> x) {
                if (fi == 0) {
                        if (es_ascendent(x)) ++fi;
                }
                else if (fi == 1) {
                        if (es_ascendent(x)) ++fi;
                        else --fi;
                }
                if (fi == 2) s2 = true;
        }
        if (fi == 2) cout << "SI" << endl;
        else cout << "NO" << endl;

}