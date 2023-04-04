#include <iostream>
#include <string>
using namespace std;

int main() {

  string str_1;
  string str_2;
  cout << "Input the integer part of number: ";
  cin >> str_1;
  cout << "Input fractional part of number: ";
  cin >> str_2;
  double n = stod(str_1 + '.' + str_2);
  cout << n << endl;

}
