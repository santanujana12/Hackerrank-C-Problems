#include<stdio.h>
#include<windows.h>
void gotoxy(int x,int y)
{
HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
COORD new ={x,y};
SetConsoleCursorPosition(out,new);
}

