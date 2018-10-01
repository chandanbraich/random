// Solution for Lab 03
#include <iostream>
using namespace std;

int main()
{
   double liters;
    
   cout << "Please enter the total amount of milk in liters: " << endl;
   cin >> liters;

   int cartons = static_cast<int>(liters/3.78);
   cout << "Number of cartons is " << cartons << endl;
   cout << "The cost of producing milk is " << liters*0.38 << endl;
   cout << "The profit is " << cartons*0.27 << endl;
   return 0;
}