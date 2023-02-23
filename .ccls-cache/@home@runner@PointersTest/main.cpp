#include <iostream>
using namespace std;

int main() {
  int playerHealth;
  int *p;

  cout << "\nEnter the player Health: ";
  cin >> playerHealth;
  
  p = &playerHealth;
  cout << "Value of p is: " << p << endl;
  cout << "Value of Player Health using pointer is: " << *p << endl;
  cout << "Value of player Health as it is: " << playerHealth << endl;

  cout << "Change the value of player health: ";
  cin >> *p;

  cout << "Value of p is: " << p << endl;
  cout << "Value of Player Health using pointer is: " << *p << endl;
  cout << "Value of player Health as it is: " << playerHealth << endl;

  return 0;
}