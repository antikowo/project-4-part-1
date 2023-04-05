#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
   int counter = 0;
   double n = 0.0;
   double times;
   double divide;
   double overFive;
   double plusExtra;

   while (n != -1.0) {
      cout << "\n Please enter a value (-1 to exit): ";
      cin >> n;
      
      counter++;
      times = (n * n);
      divide = (n / n);
      overFive = (n+3) / 5;
      plusExtra = ((n+3)/5) + ((n+7)/2);
      
      if (n != -1.0) { 
         cout << "The value you entered was " << n;
         cout << "\nThe value inputed times itself is " << times;
         cout << "\nThe value inputed divided by itself is " << divide;
         cout << "\n(n+3)/5 with n = the value inputted is " << overFive;
         cout << "\n[((n+3)/5) + ((n+7)/2)] with n = value inputted is " << plusExtra;
      }
   }

   cout << "\nThis program ran " << counter;
   cout << " times.";
}