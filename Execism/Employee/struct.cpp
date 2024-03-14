#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class employee{
  public:
 struct employeeinfo {
  int id;
  string name;
  int salary;
  int age{21};
  int phone;
  string address;
  string department;
  string position;


  void getinfo() {
    cout << "ID: " << id << endl;
    cin >> id;
    cout << "Name: " << endl;
    cin >> name;
    cout << "Salary: " << endl;
    cin >> salary;
    cout << "Age: " << endl;
    cin >> age;
    cout << "Phone: " << endl;
    cin >> phone;
    cout << "Address: " << endl;
    cin >> address;
    cout << "Department: " << endl;
    cin >> department;
    cout << "Position: " << endl;
    cin >> position;
  }
  void printinfo() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
    cout << "Age: " << age << endl;
    cout << "Phone: " << phone << endl;
    cout << "Address: " << address << endl;
    cout << "Department: " << department << endl;
    cout << "Position: " << position << endl;
  }
};
};
int main() {
  employee::employeeinfo employee;
  int n;
  cout << "Enter the number of employee : " ;
  cin >> n;
  for (int i = 0; i < n; i++){
    cout << "------Enter the information of employee------ "  << endl;
    employee.getinfo();
    cout << "------The information of employee------ "  << endl;
    employee.printinfo();
  }
  
  return 0;
}