#ifndef GAME_H
#define GAME_H

class Game
{
 public:
   #include <iostream>

   char board [3][3] ={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};

   void printBoard()
   {
     std::cout << "  0 1 2" << std::endl;
     for(int i=0; i<3; i++)
     {
       std::cout << i << " ";
         for(int j=0; j<3; j++)
         {
           std::cout << board[i][j];
           if(j<2)
           std::cout << "|";
         }
           std::cout << std::endl;
           if(i<2)
           std::cout << "  _____" << std::endl;
     }
   }

   void makeMove(int turn, int rowIn, int collIn)
   {
     if(turn == 0)
     {board[rowIn][collIn] = 'x';

     }
     else
     {board[rowIn][collIn] = 'o';

     }
   }

};

#endif
