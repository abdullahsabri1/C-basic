// PROGRAM TO CHECK WHETHER THE NUMBER IS EVEN OR ODD
// if the number is divisble by 2 : even
// if the number is not divisble by 2 : odd

#include <iostream>
using namespace std;
int main() {
  cout << "Hello! :) " << endl;

  int number;                      // declaring the variable
  cout << "Please enter number: "; // printing the message
  cin >> number;                   // taking input from the user

  if (number % 2 == 0) // checking the remainder with 2
  {
    cout << "The number you have entered is even" << endl; // printing the
                                                           // output
  } else {
    cout << "The number you entered is odd" << endl; // printing the output
  }

  cout << "Thank you :) ";
  return 0;
}