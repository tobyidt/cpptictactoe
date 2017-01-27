
#include "game.hpp"

int main()
{
  int turn =0;
Game myGame;
  bool gameOver = false;
  int rowIn;
  int collIn;

  std::cout<<"welcome to the game!" <<std::endl;


  while(gameOver == false)
  {
    myGame.printBoard();
    if(turn ==0)
    {
      std::cout <<"It is Player Ones's Turn!" << std::endl;
    }
    else
    {
      std::cout <<"It is Player Two's Turn!" << std::endl;
    }

    // do the turn
      std::cout << "pick a Row: ";
      std::cin>>rowIn;
      std::cout<<"Pick a Collum: ";
      std::cin>>collIn;

myGame.makeMove(turn, rowIn, collIn);

    turn++;
    turn%= 2;
  }
}
