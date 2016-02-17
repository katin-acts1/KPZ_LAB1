#include "suit.h"
#include <iostream>
using namespace std;
//перечислення масть
string suitStrings[]= {
    "Club",
    "Diamond",
    "Heart",
    "Spade"
};
//SuitAsString: параметри suit - масть
//повертає рядок, що визначає масть
string SuitAsString(Suit suit)
{
    return suitStrings[suit];
}
