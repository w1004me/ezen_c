#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define Left 75
#define Right 77
#define Up 80
#define Down 72
#define X_min 0
#define X_max 80
#define Y_min 0
#define Y_max 25

void main()
{
  char input, xpos=(X_max-X_min)/2, ypos=(Y_max-Y_min)/2;
  int run_state =1, move = 0, action = 0;
  COORD pos;
  system("cls");
  pos.X = xpos;
  pos.Y = ypos;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
  printf("☆");
  while(run_state)
  {
    move=0, action =0;
    input = getch();
    system("cls");
    switch(input)
    {
      case 'q':
        run_state=0;
        break;
      case Left:
        xpos--;
        move=1;
        break;
      case Right:
        xpos++;
        move=1;
        break;
      case Down:
        ypos--;
        move=1;
        break;
      case Up:
        ypos++;
        move=1;
        break;
      case 'a':
        action=1;
        break;
      case 's':
        action=2;
        break;
      default:
        break;
    }
    if(move == 1)
    {
      pos.X = xpos;
      pos.Y = ypos;
      //커서 이동
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
      printf("☆");
    }
    else if(action == 1){
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
      printf("○\n");
    }
    else if(action == 2)
    {
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
      printf("★");
    }
  }
}
