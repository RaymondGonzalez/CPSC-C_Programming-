/*
Author: Raymond Gonzalez
Email: rayraygking@csu.fullerton.edu
Course: CPSC223c-01
Assignment: #5
Due date: May 13,2017 before midnight
Program Title: Mickey Mouse in the Sea
File Name: turn90degreesright.c
Purpose: Accept the current direction and return a new direction 90 degrees right.
*/
#include"turn90degreesright.h"
char turn90right(char direct)
{

char newdirect;
switch(direct)
  {
    case 'N':
      {
      newdirect='E';
      break;
      }
    case 'E':
      {
      newdirect='S';
      break;
      }
    case 'S':
      {
      newdirect='W';
      break;
      }
    case 'W':
      {
      newdirect='N';
      break;
      }
  }
  return newdirect;
}
