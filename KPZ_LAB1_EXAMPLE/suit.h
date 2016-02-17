#include <iostream>
#include <string>
//перечислення масть
typedef enum {
    Club,
    Diamond,
    Heart,
    Spade
} Suit;

//SuitAsString: параметри suit - масть
//повертає рядок, що визначає масть
std::string SuitAsString(Suit suit);
