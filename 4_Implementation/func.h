
#define __FUN_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void gotoxy (int x, int y)
{

}
void SetColor(int ForgC)
{

}
void ClearColor()
{

}
void ClearConsoleToColors(int ForgC, int BackC)
{

}
void SetColorAndBackground(int ForgC, int BackC)
{

}
void increase_month(int *mm,  int *yy)
{

}
void decrease_month(int *mm,  int *yy)
{

}

void print_date(int mm, int yy)
{

}
void printMonth(int mon,int year,int x,int y)
{

}
void AddNote()
{

}
void showNote(int mm)
{

}
struct Date{
    int dd;
    int mm;
    int yy;
};
struct Date date;

struct Remainder{
    int dd;
    int mm;
    char note[50];
};
struct Remainder R;


COORD xy = {0, 0};
