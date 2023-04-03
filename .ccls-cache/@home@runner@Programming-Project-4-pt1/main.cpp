/* Alex Benavides
16365 COP2334 202301
jGRASP
Programming Project 4: executes basic arithmetic operations to a double value */

#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

int main() {
   
  double validateDouble(double &doubleInput);
  int counter = 0; //sets counter to 0
  double n = 0.0; // If someone inputs: j, the program infinitely loops with odd outputs.
                  // If someone inputs: 0, the program functions as normal.
  
  while(n != -1.0) //end condtion 
  {
  cout << "(enter -1 to exit the program) Enter a number with or without decimals (double): "; //takes user input
  cin >> n;
    
    if(n == -1) // ends program
      {
        cout << "Program ending..." << endl;
        cout << "This program ran " << counter << " times."; //display the amount of time that the program ran
        return 0;
      }
    
    cout << n << " squared = " << n * n << endl;
    cout << n << " divided by itself = " << n / n << endl;
    cout << "The Output for (n+3)/5 " << " = " << (n + 3) / 5 << endl;
    cout << "The Output for [ ( (n+3)/5 ) + ( (n+7)/2 ) ]" << " = " << (((n + 3) / 5) + ((n + 7) / 2));
    cout << endl;

    counter++; //adds counter for each time ran
  }  
}