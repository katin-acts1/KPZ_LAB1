#include "card.h"
using namespace std;
//Сеттер для suit
void Card::SetSuit(Suit suit)
{
    this->suit = suit;
}
//Сеттер для rank
void Card::SetRank(Rank rank)
{
    this->rank = rank;
}
    //Геттер для suit
Suit Card::GetSuit()
{
    return suit;
}
//Геттер для rank
Rank Card::GetRank()
{
    return rank;
}
    //Конструктор: параметри newSuit - масть, newRank - ранг
Card::Card(Suit newSuit, Rank newRank)
{
    suit = newSuit;
    rank = newRank;
}

string Card::RankAsStringC()
{
 return  RankAsString(rank);
 }
string Card::SuitAsStringC()
{
 return SuitAsString(suit);
 }

    //ToString(): повертає рядок, що представляє об'єкт
//void  Card::CardDisplay(Rank rank, Suit suit)
//{
//   cout <<"The "<<RankAsString(rank)<<" of "<<SuitAsString(suit)<<endl;

//}


