#include "deck.h"
#include <ctime>
//стандартний конструктор
Deck::Deck()
{
    for (int suitVal = 0; suitVal < 4; suitVal++)
    {
        for (int rankVal = 1; rankVal < 14; rankVal++)
        {
            cards[suitVal * 13 + rankVal -1] = new Card(static_cast<Suit>(suitVal),static_cast<Rank>(rankVal));
        }
    }
}
//GetCard: параметр cardNum - індекс карти
//Геттер для елемента колекції cards
Card* Deck::GetCard(int cardNum)
{
    if (cardNum >= 0 && cardNum <= 51){
        return cards[cardNum];
    }
    else
    {
        throw out_of_range("Value must be between 0 and 51.");
    }
}
//Shuffle:
//Перетасовує колоду
void Deck::Shuffle()
{
    srand(time(0));
    Card* newDeck[52];
    vector<bool> assigned(52);

    for (int i = 0; i < 52; i++)
    {
        int destCard = 0;
        bool foundCard = false;
        while (foundCard == false)
        {
            destCard = rand()%52;
            if (assigned[destCard] == false)
                foundCard = true;
        }
        assigned[destCard] = true;
        newDeck[destCard] = cards[i];
    }
    std::copy(std::begin(newDeck),std::end(newDeck),std::begin(cards));
}
