#pragma once
//��������� ����
int** GenerateCardsSet();
//����������� ������
void showCards(int** array);
//������� ������
void Shuffle(int** array);
//�������� ����������(�������� 6)
string* createPlayers(int count);
//�������� ����
int* createCash(int countPlayers, int countMoney);
//����������� ������� � �� �����
void showPlayers(string*& players, int count, int*& cash);