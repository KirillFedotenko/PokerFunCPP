#pragma once
//генерация кард
int** GenerateCardsSet();
//отображение колоды
void showCards(int** array);
//тосовка колоды
void Shuffle(int** array);
//создание персонажей(максимум 6)
string* createPlayers(int count);
//создание кэша
int* createCash(int countPlayers, int countMoney);
//отображение игроков и их денег
void showPlayers(string*& players, int count, int*& cash);