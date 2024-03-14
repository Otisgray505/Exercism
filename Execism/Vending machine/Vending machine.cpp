#include <iostream>
#include <string>
using namespace std;
void getvaluefromsuser(int* a) {
  cout << "Type in the product number: ";
  cin >> *a;
}
int main() {
  int a;
  getvaluefromsuser(&a);
  int* b = &a;
  char* p2 = (char*)&b;
  

  cout <<  a << endl << b << endl << p2 << endl;
  return 0;
}