#include <iostream>
using namespace std;

int main() {
   int x,y;
   char a;

   x = 0;
   y = 0;

   while (cin>>a){
       
      if (a=='n') x--;
      else if (a=='s') x++;
      else if (a=='e') y++;
      else if (a=='o') y--;

   }
   cout << '(' << y << ", " << x << ')' << endl;
}
