#include "rank.h"
using namespace std;
//перечислення рангів карт
string rankStrings[]={
    "Ace",
    "Deuce",
    "Three",
    "Four",
    "Five",
    "Six",
    "Seven",
    "Eight",
    "Nine",
    "Ten",
    "Jack",
    "Queen",
    "King"
};
//RankAsString: параметри rank - ранг
//повертає рядок, що визначає ранг
string RankAsString(Rank rank)
{
    return rankStrings[rank];
}
