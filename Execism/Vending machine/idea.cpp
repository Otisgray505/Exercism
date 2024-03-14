#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <stdio.h>
namespace lld {
 int a{20};
 
  
}
using namespace std;
int getvaluefromsuser() {
  int a{1};
  cout << "Type in the product number: ";
  cin >> a;
  return a;
}

bool check(int a) {
   if (a >= 1) {
     return true;
   }
   else if (a >= 10) {
     return false;
   }
   else {
     return false;
   }
 }
int main() {
  int a{1};
  getvaluefromsuser();
  
  if (check(a)) {
    cout << "true";
  }
  else {
    cout << "false";
  }
  using namespace lld;
  cout << a << endl ;
  

  return 0;
}