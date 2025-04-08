#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player {
private:
std :: string name;
char symbol;

public:
Player(const std :: string& name, char symbol);

std :: string getName() const;
char getSymbol() const;
void getMove(int& row, int& col) const;
};

Player: :Player(const std: :string& name, char symbol)
: name(name), symbol(symbol) {}

std :: string Player :: getName() const {
return name;
}

char Player :: getSymbol() const {
return symbol;
}

void Player :: getMove(int& row, int& col) const {
std :: cout << name << "(" << symbol << "), enter your move (row and column: 0, 1, or 2):
std :: cin >> row >> col;

}

#endif