#include <iostream>
using namespace std;
int func(int n) {
   int a;
   int flag = 1;
   for(a = 2; a <= n/2; a++) {
      if(n % a == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
}
int main() {
   int n,a;
   cout << "Enter a number : ";
   cin >> n;
   for(a = 2; a <= n/2; a++) {
      if (func(a)) {
         if (func(n - a)) {
            cout << n << " = " << a << " + " << n-a << endl;
         }
      }
   }
   return 0;
}
