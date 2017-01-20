#include <iostream>

char board [3][3] ={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

void printBoard()
{
  for(int i=0; i<3; i++)
  {
      for(int j=0; j<3; j++)
      {
        std::cout << board[i][j];
      }
        std::cout << std::endl;
  }
}
int main()
{
  int turn =0;

  bool gameOver = false;

  std::cout<<"welcome to the game!" <<std::endl;


  while(gameOver == false)
  {
    printBoard();
    if(turn ==0)
    {
      std::cout <<"It is Player Ones's Turn!" << std::endl;
    }
    else
    {
      std::cout <<"It is Player Two's Turn!" << std::endl;
    }

    // do the turn

    turn++;
    turn%= 2;
  }
}
