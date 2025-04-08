#include<iostream>
#include "Player.h"

int main(){

Player player1("J", 'O');

std::cout << "Name: " << player1.getName() << std::endl;
std::cout << "Symbol: " << player1.getSymbol() << std::endl;

int row, column;
player1.getMove(row, column);

std::cout << "You entered: Row = " << row << ", Column = " << column << std::endl;

return 0;
}

