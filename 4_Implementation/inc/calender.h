/** 
* @file calendar.h
* 
*
*/
#ifndef __CALENDAR_H__
#define __CALENDAR_H__

#include <stdio.h>
#include <stdlib.h>



int getkey();
void gotoxy(int ,int );
void SetColor(int );
void display(int,int,int,int[]);
void calendar(int,int);

char *month[12];


char *week[7];


int days[12];


    int tdays,k,myear;

#endif  /* #define __CALENDAR_H__*/
