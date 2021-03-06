/*
Author: Raymond Gonzalez
Email: rayraygking@csu.fullerton.edu
Course: CPSC223c-01
Assignment: #5
Due date: May 13,2017 before midnight
Program Title: Mickey Mouse in the Sea
File Name: checkrightside.c
Purpose: Check the right side of the current position and direction to see if it 
contains a 'x'. If there is an 'x' return 1.
*/
#include"checkrightside.h"
int checkrightside(char maz[49][160],int x,int y, char direct)
{
  int result=0;
  switch(direct)
  {
    case'N':
      {
      if(maz[y][x+1]=='x')
        result=1;
        break;
      }
    case'E':
      {
      if(maz[y+1][x]=='x')
        result=1;
        break;
      }
    case'S':
      {
      if(maz[y][x-1]=='x')
        result=1;
        break;
      }
    case'W':
      {
      if(maz[y-1][x]=='x')
        result=1;
        break;
      }
  }
return result;
}
