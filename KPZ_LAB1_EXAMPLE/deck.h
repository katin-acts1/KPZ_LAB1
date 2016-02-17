#include "card.h"
#include "vector"
#include <vector>
#include <iostream>
using namespace std;

class Deck
{
private:
    //cards: коллекція карт

    Card* cards[52];
public:
        //стандартний конструктор
    Deck();

    //GetCard: параметр cardNum - індекс карти
    //Геттер для елемента колекції cards
    Card* GetCard(int cardNum);

    //Shuffle:
    //Перетасовує колоду
    void Shuffle();

};
