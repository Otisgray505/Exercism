#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;
 int a;

bool lost(bool power_pellet_active, bool touching_ghost) {
    return !power_pellet_active and touching_ghost;}
/*string message(string message_) {
  size_t find_ = message_.find(":"); 
  cout << message_.substr(find_ + 1) << endl; 
  return message_;
} */
namespace log_line {
    string message(string message_) {
        return message_.substr(message_.find(":")+2);}
   string log_level( string message_){
        return message_.substr(1,message_.find(":")-2);
       }
    string reformat(string message_){
        return message(message_) + " ("+ log_level(message_) + ")";
        }

} 
namespace raindrop {

  string sound(int number) {
    string sounds = "";
    if (number % 3 == 0) {
      sounds += "Pling";
    }
    if (number % 5 == 0) {
      sounds += "Plang";
    }
    if (number % 7 == 0) {
      sounds += "Plong";
    }
    if (sounds == "") {
      sounds = to_string(number);
    }
    return sounds;
  }
}
namespace charge {
double daily_rate(double hourly_rate) {
    return hourly_rate *=8;          
}

double apply_discount(double before_discount, double discount) {
    return  (100-discount)/100*before_discount;
}
int monthly_rate(double hourly_rate, double discount) {
    return  daily_rate(hourly_rate)*((100-discount)/100) *22;
}
int days_in_budget(int budget, double hourly_rate, double discount) {
    return budget/(apply_discount(daily_rate(hourly_rate),discount)*22) ;
}
}
int main() {
  /* string message,age;
  getline(cin >> ws, message);
  size_t find_ = message.find(":"); 
  cout << message.substr(find_ + 1,size(message)) << endl; 
  getline(cin >> ws, age);
  stringstream ss{age};
  int number;
  ss >> number >> ws;
  cout << number + 32 << endl;
  string who_is_the_best = message.substr(5,3);
  cout << who_is_the_best << endl; */
  
  /*string message_;
  cout << "Type in your system message: ";
  getline(cin >> ws, message_); 
  cout << log_line::reformat(message_) << endl; */

   /*size_t number;
  cout << "Type in a natural number: ";
  cin >> ws >> number;
  cout << raindrop::sound(number) << endl;*/
 string studen_numb[100];
 int number_of_students{0};
 number_of_students +=2;
 
 cout << charge::days_in_budget(125000, 100, 10) << endl;
  return 0;
}