#include <iostream>
#include <string>
#include <vector>
#include "kpzlab1class.h"

using namespace std;
using namespace lab1;
int main()
{
    //1
    cout << "Hello World!" << endl;
    //2
    PieceT MyCurrentP = kPieceTypeKing;
    //
    KpzLab1Class::SimpleFunctionHello();
    KpzLab1Class Test;
    Test.HelloMethod();

    InhKpzLab1Class Test1;
   Test1.HelloMethod();

   // Create a vector of strings, using C++11 uniform initialization
   vector<string> myVector = {"A first string", "A second string"};
   // Add some strings to the vector using push_back
   for (auto iterator = myVector.cbegin(); iterator != myVector.cend(); ++iterator)
       cout << *iterator << endl;
   // Print the elements again using C++11 range-based for loop
   for (auto& str : myVector)
       cout << str << endl;
   myVector.push_back("A third string");
   myVector.push_back("The last string in the vector");
   // Iterate over the elements in the vector and print them
   for (auto iterator = myVector.cbegin(); iterator != myVector.cend(); ++iterator)
       cout << *iterator << endl;
   // Print the elements again using C++11 range-based for loop
   for (auto& str : myVector)
       cout << str << endl;
   return 0;

}


