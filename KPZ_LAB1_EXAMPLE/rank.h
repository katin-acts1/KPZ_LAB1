#include <iostream>
#include <string>
//перечислення рангів карт
typedef enum {
    Ace,
    Deuce,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King
} Rank;

//RankAsString: параметри rank - ранг
//повертає рядок, що визначає ранг
std::string RankAsString(Rank rank);
