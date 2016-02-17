#include "suit.h"
#include "rank.h"
//#include <iostream>
//#include <string>
class Card
{
public:
    //Конструктор: параметри newSuit - масть, newRank - ранг
    Card(Suit newSuit, Rank newRank);

    std::string RankAsStringC();
    std::string SuitAsStringC();
    //Сеттер для suit
    void SetSuit(Suit suit);
    //Сеттер для rank
    void SetRank(Rank rank);

    //Геттер для suit
    Suit GetSuit();

    //Геттер для rank
    Rank GetRank();


   // void  CardDisplay(Rank rank, Suit suit);
    //ToString(): повертає рядок, що представляє об'єкт
  //void  CardDisplay();
protected:
    Suit suit;
    Rank rank;
};
