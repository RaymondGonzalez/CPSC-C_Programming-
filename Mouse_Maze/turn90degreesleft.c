/*
Author: Raymond Gonzalez
Email: rayraygking@csu.fullerton.edu
Course: CPSC223c-01
Assignment: #5
Due date: May 13,2017 before midnight
Program Title: Mickey Mouse in the Sea
File Name: turn90degreesleft.c
Purpose: Accept the current direction and return a new direction 90 degrees left.
*/
#include"turn90degreesleft.h"
char turn90left(char direct)
{

char newdirect;
switch(direct)
  {
    case 'N':
      {
      newdirect='W';
      break;
      }
    case 'E':
      {
      newdirect='N';
      break;
      }
    case 'S':
      {
      newdirect='E';
      break;
      }
    case 'W':
      {
      newdirect='S';
      break;
      }
  }
  return newdirect;
}
