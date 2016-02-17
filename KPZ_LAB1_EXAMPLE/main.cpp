#include <iostream>
#include "card.h"


using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Card card ((Suit)0, (Rank)0);
    cout <<card.RankAsStringC()<<"   |    "<< card.SuitAsStringC()<<endl;
    return 0;
}

