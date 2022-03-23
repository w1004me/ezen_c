#include <stdio.h>
#include <conio.h>
#include <windows.h>

void main()
{
  char input, xpos=40, ypos=15;
  COORD pos;
  system("cls");
  pos.X = xpos;
  pos.Y = ypos;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
  printf("☆");
  while(1)
  {
    input = getch();
    system("cls");
    if(input=='q')
      break;
    else if(input==72 || input==75 || input==77 || input==80)
    {
      
      if(xpos >= 0 && xpos <=80)
      {
        if(input==75)
          xpos--;
        else if(input==77)
          xpos++;  
      }
      if(ypos >= 0 && ypos <=25)
      {
        if(input==72)
          ypos--;
        else if(input==80)
          ypos++;
      }
      pos.X = xpos;
      pos.Y = ypos;
      //커서 이동
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
      printf("☆");
    }
    else if(input=='a')
    {
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
      printf("★");
    }
    else if(input=='s')
    {
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
      printf("○\n");
    }
  }
}
